//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Baekjoon_CSharp
//{
//    class LineTryout1
//    {

//        public static List<int> maxDaysPerMonth = 
//            new List<int>() { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};

//        public static int solution(string[] holidays, int k)
//        {
//            // holiday check
//            List<bool> isHoliday = new List<bool>();
//            int week = 5;
//            for(int i = 0; i < 365; i++)
//            {
//                if(week <= 5)
//                {
//                    isHoliday.Add(false);
//                }
//                else
//                {
//                    isHoliday.Add(true);
//                }
//                week = week + 1 > 7 ? 1 : week + 1;
//            }

//            foreach(var hStr in holidays)
//            {
//                int month;
//                int.TryParse(hStr.Substring(0, 2), out month);
//                int day; 
//                int.TryParse(hStr.Substring(3, 2), out day);

//                Console.WriteLine(month +""+ day);

//                int monthStart = maxDaysPerMonth.Take(month - 1).Sum();
//                isHoliday[monthStart + day-1] = true;
//            }

//            // sequence check
//            List<int> holidaySequenceCounter = Enumerable.Repeat(0, 365).ToList(); // i일 연속 휴일이 element만큼있다.
//            int curr = 0;
//            foreach(var h in isHoliday)
//            {
//                if(h == true)
//                {
//                    curr++;
//                }
//                else
//                {
//                    if(curr > 0)
//                    {
//                        holidaySequenceCounter[curr]++;
//                        curr = 0;
//                    }
//                }
//            }

//            // Sequence일 연속하는 휴일이 Count번
//            List<(int Count, int Sequence)>holidaySequence = holidaySequenceCounter.Select((c, i) => (c, i)).ToList();
//            holidaySequence = holidaySequence.Where(e => e.Count > 0).ToList();
//            holidaySequence = holidaySequence.OrderByDescending(e => e.Sequence).ToList();

//            return holidaySequence[k-1].Sequence;
//        }

//        static void Main()
//        {
//            string[] holidays = { "01/14", "01/15", "01/18", "01/22", "01/23", "01/29", "02/01", "02/03", "02/07" };
//            int s = solution(holidays, 2);
//            Console.WriteLine(s);
//        }
//    }
//}
