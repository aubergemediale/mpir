using System;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using uwp_WindowsRuntimeComponent_mpir;

namespace uwp_TestApp_mpir
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void CallWRC()
        {
            var test = new Class1();
            var result = test.Add(3, 3);
            Assert.AreEqual(6,result);
        }

        [TestMethod]
        public void CallDLL()
        {
            var test = new Class1();
            var result = test.MpirAdd(3, 3);
            Assert.AreEqual(6, result);
        }

        [TestMethod]
        public void CallMpirAdd()
        {
            var test = new Class1();
            var result = test.MpirAdd2(3, 3);
            Assert.AreEqual(6, result);
        }
    }
}
