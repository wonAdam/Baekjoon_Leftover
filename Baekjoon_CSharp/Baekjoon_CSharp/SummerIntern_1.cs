//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Text.RegularExpressions;

//namespace Baekjoon_CSharp
//{
//    class SummerIntern_1
//    {
//        struct Data
//        {
//            public string price;
//            public string code;
//            public string time;
//            public Data(string[] entries)
//            {
//                price = entries[0].Substring(6);
//                code = entries[1].Substring(5);
//                time = entries[2].Substring(5);
//            }
//        }
//        static public int[] solution(string code, string day, string[] data)
//        {
//            int[] answer = new int[] { };

//            List<Data> datas = new List<Data>();
//            foreach(var d in data)
//            {
//                string[] entries = Regex.Split(d, " ");

//                string _code = entries[1].Substring(5);
//                string _day = entries[2].Substring(5, 8);
//                if (_code == code && _day == day)
//                    datas.Add(new Data(entries));
//            }

//            datas = datas.OrderBy(d => d.time).ToList();

//            return datas.Select(d => int.Parse(d.price)).ToArray();
//        }

//        static void Main()
//        {
//            int[] r = solution("012345", "20190620", new string[]{ "price=80 code=987654 time=2019062113","price=90 code=012345 time=2019062014","price=120 code=987654 time=2019062010","price=110 code=012345 time=2019062009","price=95 code=012345 time=2019062111" });
        
            
//        }
//    }

    
//}
