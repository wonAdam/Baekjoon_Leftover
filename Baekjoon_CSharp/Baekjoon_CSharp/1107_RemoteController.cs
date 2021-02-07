//using System;
//using System.Linq;
//using System.Text.RegularExpressions;

//namespace Baekjoon_CSharp
//{
//    class _1107_RemoteController
//    {

//        public static int GetNearestUnbrokenBtn(int[] brokenBtns, int targetBtn)
//        {
//            if (brokenBtns == null) return targetBtn;
//            for(int i = 0; i < 10; i++)
//            {
//                if (targetBtn - i > 0 && !brokenBtns.Contains(targetBtn - i)) return targetBtn - i;
//                if (targetBtn - i < 10 && !brokenBtns.Contains(targetBtn + i)) return targetBtn + i;
//            }
//            return -1;
//        }

//        static void Main()
//        {
            
//            int[] targetChannel = Regex.Split(Console.ReadLine(), String.Empty).Where(s => int.TryParse(s, out _) == true).Select(s => int.Parse(s)).ToArray();
//            int num = int.Parse(Console.ReadLine()); // no need to store

//            int[] brokenBtns = null;
//            if (num > 0)
//                brokenBtns = Console.ReadLine().Split(" ").Where(s => int.TryParse(s, out _) == true).Select((s) =>int.Parse(s)).ToArray();
            
//            int pressCount = 0;
//            int[] channel = new int[targetChannel.Length];
//            foreach(var (n, i) in targetChannel.Select((n, i) => (n, i)))
//            {
//                channel[i] = GetNearestUnbrokenBtn(brokenBtns, n);
//                pressCount++;
//            }
//            int channelInt = int.Parse(String.Join("", channel.Select((n) => n.ToString())));
//            int targetChannelInt = int.Parse(String.Join("", targetChannel.Select((n) => n.ToString())));
//            Console.Write(Math.Min(pressCount + Math.Abs(channelInt - targetChannelInt), Math.Abs(targetChannelInt - 100)));
//        }
//    }
//}
