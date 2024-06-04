

   





 

 



 
 
 #define __API_TO_BE_DEPRECATED 100000
 
 




























 































   













  





    #if defined(0 && 1
        
            #define __MAC_OS_X_VERSION_MIN_REQUIRED 140000
            
        #endif
    


    #if defined(0 && 1
        
    #elif  __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__ 
        
        #define __IPHONE_OS_VERSION_MAX_ALLOWED 170400
    


    #if defined(0 && 1
        
    #elif  __ENVIRONMENT_WATCH_OS_VERSION_MIN_REQUIRED__ 
        
        #define __WATCH_OS_VERSION_MAX_ALLOWED 100400
        
        
    #endif 



    #if defined(0 && 1
        
    #elif  __ENVIRONMENT_TV_OS_VERSION_MIN_REQUIRED__ 
        
        #define __TV_OS_VERSION_MAX_ALLOWED 170400
        
        
    #endif 



    #if defined(0 && 1
        
    #endif 



    #if defined(0 && 1
        
    #endif 



    #if defined(0 && 1
        
    #endif 



//FIXME: Workaround for rdar://116062344

    #if defined(0 && 1
        
    #endif 







    
    
        #define __IPHONE_OS_VERSION_MAX_ALLOWED     170000
    
    
    


    #if 1
        
    #else
        
    #endif






  




 #if 1
  
   #if 1
    
     #if 1
      
       #if (0 && 1 && ((0 && 0) || (0 && 0)))
         
         #define __ENABLE_LEGACY_MAC_AVAILABILITY 1
       
      #endif 
     
    #endif 
   
  #endif 
 


  #define __ENABLE_LEGACY_MAC_AVAILABILITY 1
 


    #if defined(0 && defined(0
        
            
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=2.0,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.0,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=2.0,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.0,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=2.0,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=2.0,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=2.0,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=2.0,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_11_0   __attribute__((availability(ios,introduced=2.0,deprecated=11.0)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=2.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=2.1,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=2.1,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=2.1,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=2.1,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_1   __attribute__((availability(ios,introduced=2.1,deprecated=2.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=2.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_2   __attribute__((availability(ios,introduced=2.1,deprecated=2.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_2_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=2.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_0   __attribute__((availability(ios,introduced=2.1,deprecated=3.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=3.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_1   __attribute__((availability(ios,introduced=2.1,deprecated=3.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=3.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_2   __attribute__((availability(ios,introduced=2.1,deprecated=3.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_2_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=3.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_0   __attribute__((availability(ios,introduced=2.1,deprecated=4.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=4.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_1   __attribute__((availability(ios,introduced=2.1,deprecated=4.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=4.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_2   __attribute__((availability(ios,introduced=2.1,deprecated=4.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_2_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=4.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_3   __attribute__((availability(ios,introduced=2.1,deprecated=4.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_3_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=4.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_5_0   __attribute__((availability(ios,introduced=2.1,deprecated=5.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_5_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=5.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_5_1   __attribute__((availability(ios,introduced=2.1,deprecated=5.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_5_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=5.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_6_0   __attribute__((availability(ios,introduced=2.1,deprecated=6.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_6_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=6.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_6_1   __attribute__((availability(ios,introduced=2.1,deprecated=6.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_6_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=6.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_7_0   __attribute__((availability(ios,introduced=2.1,deprecated=7.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_7_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=7.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_7_1   __attribute__((availability(ios,introduced=2.1,deprecated=7.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_7_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=7.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_0   __attribute__((availability(ios,introduced=2.1,deprecated=8.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=8.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=2.1,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=2.1,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=2.1,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=2.1,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=2.1,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=2.1,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=2.1,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=2.1,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=2.1,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=2.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_2                    __attribute__((availability(ios,introduced=2.2)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=2.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=3.0,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=3.0,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=3.0,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=3.0,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_0   __attribute__((availability(ios,introduced=3.0,deprecated=3.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=3.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_1   __attribute__((availability(ios,introduced=3.0,deprecated=3.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=3.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_2   __attribute__((availability(ios,introduced=3.0,deprecated=3.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=3.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_0   __attribute__((availability(ios,introduced=3.0,deprecated=4.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=4.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_1   __attribute__((availability(ios,introduced=3.0,deprecated=4.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=4.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_2   __attribute__((availability(ios,introduced=3.0,deprecated=4.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=4.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_3   __attribute__((availability(ios,introduced=3.0,deprecated=4.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_3_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=4.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_5_0   __attribute__((availability(ios,introduced=3.0,deprecated=5.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_5_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=5.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_5_1   __attribute__((availability(ios,introduced=3.0,deprecated=5.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_5_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=5.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_6_0   __attribute__((availability(ios,introduced=3.0,deprecated=6.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_6_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=6.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_6_1   __attribute__((availability(ios,introduced=3.0,deprecated=6.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_6_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=6.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_7_0   __attribute__((availability(ios,introduced=3.0,deprecated=7.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_7_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=7.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_7_1   __attribute__((availability(ios,introduced=3.0,deprecated=7.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_7_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=7.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_0   __attribute__((availability(ios,introduced=3.0,deprecated=8.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=8.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=3.0,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=3.0,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=3.0,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=3.0,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=3.0,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=3.0,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=3.0,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=3.0,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=3.0,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=3.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_1                    __attribute__((availability(ios,introduced=3.1)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=3.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=3.2,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=3.2,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=3.2,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=3.2,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_3_2   __attribute__((availability(ios,introduced=3.2,deprecated=3.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_3_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=3.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_4_0   __attribute__((availability(ios,introduced=3.2,deprecated=4.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_4_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=4.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_4_1   __attribute__((availability(ios,introduced=3.2,deprecated=4.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_4_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=4.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_4_2   __attribute__((availability(ios,introduced=3.2,deprecated=4.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_4_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=4.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_4_3   __attribute__((availability(ios,introduced=3.2,deprecated=4.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_4_3_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=4.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_5_0   __attribute__((availability(ios,introduced=3.2,deprecated=5.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_5_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=5.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_5_1   __attribute__((availability(ios,introduced=3.2,deprecated=5.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_5_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=5.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_6_0   __attribute__((availability(ios,introduced=3.2,deprecated=6.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_6_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=6.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_6_1   __attribute__((availability(ios,introduced=3.2,deprecated=6.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_6_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=6.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_7_0   __attribute__((availability(ios,introduced=3.2,deprecated=7.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_7_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=7.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_7_1   __attribute__((availability(ios,introduced=3.2,deprecated=7.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_7_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=7.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_0   __attribute__((availability(ios,introduced=3.2,deprecated=8.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=8.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=3.2,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=3.2,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=3.2,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=3.2,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=3.2,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=3.2,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=3.2,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=3.2,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=3.2,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_3_2_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=3.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0                    __attribute__((availability(ios,introduced=4.0)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_12_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=12.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0   __attribute__((availability(ios,introduced=4.0,deprecated=4.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=4.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_1   __attribute__((availability(ios,introduced=4.0,deprecated=4.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=4.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_2   __attribute__((availability(ios,introduced=4.0,deprecated=4.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_2_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=4.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_3   __attribute__((availability(ios,introduced=4.0,deprecated=4.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_3_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=4.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_0   __attribute__((availability(ios,introduced=4.0,deprecated=5.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=5.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_1   __attribute__((availability(ios,introduced=4.0,deprecated=5.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_5_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=5.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_0   __attribute__((availability(ios,introduced=4.0,deprecated=6.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=6.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_1   __attribute__((availability(ios,introduced=4.0,deprecated=6.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_6_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=6.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_0   __attribute__((availability(ios,introduced=4.0,deprecated=7.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=7.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_1   __attribute__((availability(ios,introduced=4.0,deprecated=7.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_7_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=7.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_0   __attribute__((availability(ios,introduced=4.0,deprecated=8.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=8.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=4.0,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=4.0,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=4.0,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=4.0,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=4.0,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=4.0,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=4.0,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=4.0,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=4.0,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=4.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_1                    __attribute__((availability(ios,introduced=4.1)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_1_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=4.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=4.2,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=4.2,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=4.2,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=4.2,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_2   __attribute__((availability(ios,introduced=4.2,deprecated=4.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_2_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=4.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_3   __attribute__((availability(ios,introduced=4.2,deprecated=4.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_4_3_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=4.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_0   __attribute__((availability(ios,introduced=4.2,deprecated=5.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=5.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_1   __attribute__((availability(ios,introduced=4.2,deprecated=5.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_5_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=5.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_0   __attribute__((availability(ios,introduced=4.2,deprecated=6.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=6.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_1   __attribute__((availability(ios,introduced=4.2,deprecated=6.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_6_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=6.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_0   __attribute__((availability(ios,introduced=4.2,deprecated=7.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=7.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_1   __attribute__((availability(ios,introduced=4.2,deprecated=7.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_7_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=7.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_0   __attribute__((availability(ios,introduced=4.2,deprecated=8.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=8.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=4.2,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=4.2,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=4.2,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=4.2,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=4.2,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=4.2,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=4.2,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=4.2,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=4.2,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_2_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=4.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_3                    __attribute__((availability(ios,introduced=4.3)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_4_3_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=4.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=5.0,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=5.0,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=5.0,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=5.0,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=5.0,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=5.0,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=5.0,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=5.0,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_11_0   __attribute__((availability(ios,introduced=5.0,deprecated=11.0)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_0_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=5.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=5.1,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=5.1,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=5.1,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=5.1,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_5_1   __attribute__((availability(ios,introduced=5.1,deprecated=5.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_5_1_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=5.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_6_0   __attribute__((availability(ios,introduced=5.1,deprecated=6.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_6_0_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=6.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_6_1   __attribute__((availability(ios,introduced=5.1,deprecated=6.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_6_1_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=6.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_7_0   __attribute__((availability(ios,introduced=5.1,deprecated=7.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_7_0_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=7.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_7_1   __attribute__((availability(ios,introduced=5.1,deprecated=7.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_7_1_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=7.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_0   __attribute__((availability(ios,introduced=5.1,deprecated=8.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_0_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=8.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=5.1,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=5.1,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=5.1,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=5.1,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=5.1,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=5.1,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=5.1,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=5.1,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=5.1,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_5_1_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=5.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_0                    __attribute__((availability(ios,introduced=6.0)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_0_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=6.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=6.1,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=6.1,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=6.1,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=6.1,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_6_1   __attribute__((availability(ios,introduced=6.1,deprecated=6.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_6_1_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=6.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_7_0   __attribute__((availability(ios,introduced=6.1,deprecated=7.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_7_0_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=7.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_7_1   __attribute__((availability(ios,introduced=6.1,deprecated=7.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_7_1_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=7.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_0   __attribute__((availability(ios,introduced=6.1,deprecated=8.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_0_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=8.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=6.1,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=6.1,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=6.1,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=6.1,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=6.1,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=6.1,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=6.1,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=6.1,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=6.1,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_6_1_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=6.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0                    __attribute__((availability(ios,introduced=7.0)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_11_3   __attribute__((availability(ios,introduced=7.0,deprecated=11.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_12_0_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=12.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_0   __attribute__((availability(ios,introduced=7.0,deprecated=7.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_0_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=7.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_1   __attribute__((availability(ios,introduced=7.0,deprecated=7.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_7_1_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=7.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_0   __attribute__((availability(ios,introduced=7.0,deprecated=8.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_0_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=8.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=7.0,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=7.0,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=7.0,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=7.0,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=7.0,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=7.0,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=7.0,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=7.0,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=7.0,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_0_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=7.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_1                    __attribute__((availability(ios,introduced=7.1)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_7_1_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=7.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=8.0,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=8.0,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=8.0,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=8.0,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=8.0,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=8.0,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=8.0,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=8.0,deprecated=10.3,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_12_0   __attribute__((availability(ios,introduced=8.0,deprecated=12.0)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_0_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=8.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=8.1,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=8.1,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=8.1,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=8.1,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_8_1   __attribute__((availability(ios,introduced=8.1,deprecated=8.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_8_1_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=8.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_8_2   __attribute__((availability(ios,introduced=8.1,deprecated=8.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_8_2_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=8.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=8.1,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=8.1,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=8.1,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=8.1,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=8.1,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=8.1,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=8.1,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_1_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=8.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_2                    __attribute__((availability(ios,introduced=8.2)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_2_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=8.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=8.3,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=8.3,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=8.3,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=8.3,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_8_3   __attribute__((availability(ios,introduced=8.3,deprecated=8.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_8_3_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=8.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_8_4   __attribute__((availability(ios,introduced=8.3,deprecated=8.4)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_8_4_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=8.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=8.3,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=8.3,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=8.3,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=8.3,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=8.3,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_3_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=8.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_4                    __attribute__((availability(ios,introduced=8.4)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_8_4_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=8.4)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=9.0,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=9.0,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=9.0,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=9.0,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=9.0,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=9.0,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=9.0,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=9.0,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_9_0   __attribute__((availability(ios,introduced=9.0,deprecated=9.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_9_0_MSG(_msg)   __attribute__((availability(ios,introduced=9.0,deprecated=9.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_9_1   __attribute__((availability(ios,introduced=9.0,deprecated=9.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_9_1_MSG(_msg)   __attribute__((availability(ios,introduced=9.0,deprecated=9.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=9.0,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=9.0,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=9.0,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=9.0,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_0_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=9.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_1                    __attribute__((availability(ios,introduced=9.1)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_1_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=9.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=9.2,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=9.2,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=9.2,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=9.2,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=9.2,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=9.2,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=9.2,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=9.2,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_9_2   __attribute__((availability(ios,introduced=9.2,deprecated=9.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_9_2_MSG(_msg)   __attribute__((availability(ios,introduced=9.2,deprecated=9.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_9_3   __attribute__((availability(ios,introduced=9.2,deprecated=9.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_9_3_MSG(_msg)   __attribute__((availability(ios,introduced=9.2,deprecated=9.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_2_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=9.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_3                    __attribute__((availability(ios,introduced=9.3)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_9_3_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=9.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_10_0   __attribute__((availability(ios,introduced=10.0,deprecated=10.0)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_10_0_MSG(_msg)   __attribute__((availability(ios,introduced=10.0,deprecated=10.0,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_10_1   __attribute__((availability(ios,introduced=10.0,deprecated=10.1)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_10_1_MSG(_msg)   __attribute__((availability(ios,introduced=10.0,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=10.0,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=10.0,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=10.0,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=10.0,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_11_0   __attribute__((availability(ios,introduced=10.0,deprecated=11.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_0_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=10.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_1                    __attribute__((availability(ios,introduced=10.1)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_1_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=10.1)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_2_DEP__IPHONE_10_2   __attribute__((availability(ios,introduced=10.2,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_10_2_DEP__IPHONE_10_2_MSG(_msg)   __attribute__((availability(ios,introduced=10.2,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_2_DEP__IPHONE_10_3   __attribute__((availability(ios,introduced=10.2,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__IPHONE_10_2_DEP__IPHONE_10_3_MSG(_msg)   __attribute__((availability(ios,introduced=10.2,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_2_DEP__IPHONE_NA   __attribute__((availability(ios,introduced=10.2)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_3                    __attribute__((availability(ios,introduced=10.3)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__IPHONE_10_3_DEP__IPHONE_NA_MSG(_msg)   __attribute__((availability(ios,introduced=10.3)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_11_0                    __attribute__((availability(ios,introduced=11.0)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_12_0                    __attribute__((availability(ios,introduced=12.0)))
            

            
            #define __AVAILABILITY_INTERNAL__IPHONE_NA__IPHONE_NA           __attribute__((availability(ios,unavailable)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_NA_DEP__IPHONE_NA_MSG(_msg) __attribute__((availability(ios,unavailable)))

            
             #if 1
              
               #if 1
                
                 #if 1
                  
                 #endif 
                
               #endif 
              
             #endif 
            

            
                #define __AVAILABILITY_INTERNAL__IPHONE_COMPAT_VERSION __attribute__((availability(ios,introduced=4.0)))
                
                #if 1
                
                #else
                
                #endif
            
        #endif
    


                #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_11_MSG(_msg)   __attribute__((availability(macosx,introduced=10.1,deprecated=10.11)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.1,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.1,deprecated=10.12,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.1)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_1   __attribute__((availability(macosx,introduced=10.2,deprecated=10.1)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_2   __attribute__((availability(macosx,introduced=10.2,deprecated=10.10.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_3   __attribute__((availability(macosx,introduced=10.2,deprecated=10.10.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.10.3,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_2   __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_3   __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_4   __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.11.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.12.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_2   __attribute__((availability(macosx,introduced=10.2,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_3   __attribute__((availability(macosx,introduced=10.2,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_4   __attribute__((availability(macosx,introduced=10.2,deprecated=10.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_5   __attribute__((availability(macosx,introduced=10.2,deprecated=10.5)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_5_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.5,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_6   __attribute__((availability(macosx,introduced=10.2,deprecated=10.6)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_6_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.6,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_7   __attribute__((availability(macosx,introduced=10.2,deprecated=10.7)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_7_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.7,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_8   __attribute__((availability(macosx,introduced=10.2,deprecated=10.8)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_8_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.8,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_9   __attribute__((availability(macosx,introduced=10.2,deprecated=10.9)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_9_MSG(_msg)   __attribute__((availability(macosx,introduced=10.2,deprecated=10.9,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.2)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3                    __attribute__((availability(macosx,introduced=10.3)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10   __attribute__((availability(macosx,introduced=10.3,deprecated=10.10)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_MSG(_msg)   __attribute__((availability(macosx,introduced=10.3,deprecated=10.10,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11   __attribute__((availability(macosx,introduced=10.3,deprecated=10.11)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_MSG(_msg)   __attribute__((availability(macosx,introduced=10.3,deprecated=10.11,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.3,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.3,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_13   __attribute__((availability(macosx,introduced=10.3,deprecated=10.13)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.3)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_1   __attribute__((availability(macosx,introduced=10.4,deprecated=10.1)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_2   __attribute__((availability(macosx,introduced=10.4,deprecated=10.10.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_3   __attribute__((availability(macosx,introduced=10.4,deprecated=10.10.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.10.3,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_2   __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_3   __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_4   __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.11.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.12.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_4   __attribute__((availability(macosx,introduced=10.4,deprecated=10.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_5   __attribute__((availability(macosx,introduced=10.4,deprecated=10.5)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_5_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.5,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_6   __attribute__((availability(macosx,introduced=10.4,deprecated=10.6)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_6_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.6,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_7   __attribute__((availability(macosx,introduced=10.4,deprecated=10.7)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_7_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.7,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_8   __attribute__((availability(macosx,introduced=10.4,deprecated=10.8)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_8_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.8,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_9   __attribute__((availability(macosx,introduced=10.4,deprecated=10.9)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_9_MSG(_msg)   __attribute__((availability(macosx,introduced=10.4,deprecated=10.9,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.4)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5                    __attribute__((availability(macosx,introduced=10.5)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_1   __attribute__((availability(macosx,introduced=10.5,deprecated=10.1)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_2   __attribute__((availability(macosx,introduced=10.5,deprecated=10.10.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5,deprecated=10.10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_3   __attribute__((availability(macosx,introduced=10.5,deprecated=10.10.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5,deprecated=10.10.3,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_2   __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_3   __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_4   __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5,deprecated=10.11.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5,deprecated=10.12.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.5)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_1   __attribute__((availability(macosx,introduced=10.6,deprecated=10.1)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_2   __attribute__((availability(macosx,introduced=10.6,deprecated=10.10.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_3   __attribute__((availability(macosx,introduced=10.6,deprecated=10.10.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.10.3,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_2   __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_3   __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_4   __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.11.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.12.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_6   __attribute__((availability(macosx,introduced=10.6,deprecated=10.6)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_6_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.6,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_7   __attribute__((availability(macosx,introduced=10.6,deprecated=10.7)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_7_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.7,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_8   __attribute__((availability(macosx,introduced=10.6,deprecated=10.8)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_8_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.8,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_9   __attribute__((availability(macosx,introduced=10.6,deprecated=10.9)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_9_MSG(_msg)   __attribute__((availability(macosx,introduced=10.6,deprecated=10.9,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.6)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7                    __attribute__((availability(macosx,introduced=10.7)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10   __attribute__((availability(macosx,introduced=10.7,deprecated=10.10)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_MSG(_msg)   __attribute__((availability(macosx,introduced=10.7,deprecated=10.10,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11   __attribute__((availability(macosx,introduced=10.7,deprecated=10.11)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_MSG(_msg)   __attribute__((availability(macosx,introduced=10.7,deprecated=10.11,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.7,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.7,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_13_2   __attribute__((availability(macosx,introduced=10.7,deprecated=10.13.2)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.7)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_1   __attribute__((availability(macosx,introduced=10.8,deprecated=10.1)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_2   __attribute__((availability(macosx,introduced=10.8,deprecated=10.10.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_3   __attribute__((availability(macosx,introduced=10.8,deprecated=10.10.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.10.3,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_2   __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_3   __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_4   __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.11.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.12.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_8   __attribute__((availability(macosx,introduced=10.8,deprecated=10.8)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_8_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.8,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_9   __attribute__((availability(macosx,introduced=10.8,deprecated=10.9)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_9_MSG(_msg)   __attribute__((availability(macosx,introduced=10.8,deprecated=10.9,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.8)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9                    __attribute__((availability(macosx,introduced=10.9)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10   __attribute__((availability(macosx,introduced=10.9,deprecated=10.10)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_MSG(_msg)   __attribute__((availability(macosx,introduced=10.9,deprecated=10.10,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11   __attribute__((availability(macosx,introduced=10.9,deprecated=10.11)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_MSG(_msg)   __attribute__((availability(macosx,introduced=10.9,deprecated=10.11,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.9,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.9,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_13   __attribute__((availability(macosx,introduced=10.9,deprecated=10.13)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_9   __attribute__((availability(macosx,introduced=10.9,deprecated=10.9)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_9_MSG(_msg)   __attribute__((availability(macosx,introduced=10.9,deprecated=10.9,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.9)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0                    __attribute__((availability(macosx,introduced=10.0)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10   __attribute__((availability(macosx,introduced=10.0,deprecated=10.10)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_10_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.10,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11   __attribute__((availability(macosx,introduced=10.0,deprecated=10.11)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_11_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.11,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.0,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_13   __attribute__((availability(macosx,introduced=10.0,deprecated=10.13)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_2   __attribute__((availability(macosx,introduced=10.0,deprecated=10.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_3   __attribute__((availability(macosx,introduced=10.0,deprecated=10.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_4   __attribute__((availability(macosx,introduced=10.0,deprecated=10.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_5   __attribute__((availability(macosx,introduced=10.0,deprecated=10.5)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_5_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_6   __attribute__((availability(macosx,introduced=10.0,deprecated=10.6)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_6_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.6,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_7   __attribute__((availability(macosx,introduced=10.0,deprecated=10.7)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_7_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.7,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_8   __attribute__((availability(macosx,introduced=10.0,deprecated=10.8)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_8_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.8,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_9   __attribute__((availability(macosx,introduced=10.0,deprecated=10.9)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_10_9_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0,deprecated=10.9,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_0_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.0)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10                    __attribute__((availability(macosx,introduced=10.10)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_2   __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.10.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.10.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_3   __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.10.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_10_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.10.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11   __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_11_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.11,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.2,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_2_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.10.2)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3                    __attribute__((availability(macosx,introduced=10.10.3)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_2   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_3   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_4   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_11_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.11.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.3,deprecated=10.12.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_3_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10.3)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10   __attribute__((availability(macosx,introduced=10.10,deprecated=10.10)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_10_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10,deprecated=10.10,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11   __attribute__((availability(macosx,introduced=10.10,deprecated=10.11)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_11_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10,deprecated=10.11,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.10,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_13   __attribute__((availability(macosx,introduced=10.10,deprecated=10.13)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_13_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10,deprecated=10.13,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_10_13_4   __attribute__((availability(macosx,introduced=10.10,deprecated=10.13.4)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_10_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.10)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2                    __attribute__((availability(macosx,introduced=10.11.2)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.2,deprecated=10.12.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_2_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.2)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_3   __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.11.3)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_3_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.11.3,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_4   __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.11.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_11_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.11.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.3,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_3_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.11.3)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4                    __attribute__((availability(macosx,introduced=10.11.4)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.4,deprecated=10.12.4,message=_msg)))
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_4_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11.4)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11   __attribute__((availability(macosx,introduced=10.11,deprecated=10.11)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_11_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11,deprecated=10.11,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.11,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.11,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_11_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.11)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12                    __attribute__((availability(macosx,introduced=10.12)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_1   __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.1)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_1_MSG(_msg)   __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.1,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_2   __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.2)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_2_MSG(_msg)   __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.2,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.12.1,deprecated=10.12.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_1_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.12.1)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_2                    __attribute__((availability(macosx,introduced=10.12.2)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_2_DEP__MAC_NA_MSG(_msg)   __attribute__((availability(macosx,introduced=10.12.2)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_4_DEP__MAC_10_12_4   __attribute__((availability(macosx,introduced=10.12.4,deprecated=10.12.4)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_12_4_DEP__MAC_10_12_4_MSG(_msg)   __attribute__((availability(macosx,introduced=10.12.4,deprecated=10.12.4,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_4_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.12.4)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12   __attribute__((availability(macosx,introduced=10.12,deprecated=10.12)))
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
            #if 1
                
            #else
                
            #endif
            
                #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_12_MSG(_msg)   __attribute__((availability(macosx,introduced=10.12,deprecated=10.12,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_13   __attribute__((availability(macosx,introduced=10.12,deprecated=10.13)))
            
                #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_13_MSG(_msg)   __attribute__((availability(macosx,introduced=10.12,deprecated=10.13,message=_msg)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_10_13_4   __attribute__((availability(macosx,introduced=10.12,deprecated=10.13.4)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_12_DEP__MAC_NA   __attribute__((availability(macosx,introduced=10.12)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_13                    __attribute__((availability(macosx,introduced=10.13)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_14                    __attribute__((availability(macosx,introduced=10.14)))
            
            #define __AVAILABILITY_INTERNAL__MAC_10_15                    __attribute__((availability(macosx,introduced=10.15)))

            
            #define __AVAILABILITY_INTERNAL__MAC_NA_DEP__MAC_NA            __attribute__((availability(macosx,unavailable)))
            

            
            #define __AVAILABILITY_INTERNAL__IPHONE_NA__IPHONE_NA           __attribute__((availability(ios,unavailable)))
            
            #define __AVAILABILITY_INTERNAL__IPHONE_NA_DEP__IPHONE_NA_MSG(_msg) __attribute__((availability(ios,unavailable)))

            
             #define __AVAILABILITY_INTERNAL__IPHONE_COMPAT_VERSION                                          __attribute__((availability(ios,unavailable)))
             
             #define __attribute__((availability(ios,introduced=4.0,deprecated=4.0)))     __attribute__((availability(ios,unavailable)))
            
        #endif
    




 #if 1
   
   #define __API_DEPRECATED_PLATFORM_macos(x,y) macos,introduced=x,deprecated=y
   
   #define __API_AVAILABLE_PLATFORM_macosx(x) macos,introduced=x
   
   #define __API_UNAVAILABLE_PLATFORM_macosx macos,unavailable
   
   #define __API_DEPRECATED_PLATFORM_ios(x,y) ios,introduced=x,deprecated=y
   
   #define __API_AVAILABLE_PLATFORM_macCatalyst(x) macCatalyst,introduced=x
   
   #define __API_UNAVAILABLE_PLATFORM_macCatalyst macCatalyst,unavailable
   
   #define macCatalyst,introduced=x,deprecated=y macCatalyst,introduced=x,deprecated=y
   
   #define __API_AVAILABLE_PLATFORM_watchos(x) watchos,introduced=x
   
   #define __API_UNAVAILABLE_PLATFORM_watchos watchos,unavailable
   
   #define __API_DEPRECATED_PLATFORM_tvos(x,y) tvos,introduced=x,deprecated=y
   
   
   
   
   
   #define __API_DEPRECATED_PLATFORM_driverkit(x,y) driverkit,introduced=x,deprecated=y
   
   #define __API_AVAILABLE_PLATFORM_visionos(x) visionos,introduced=x
   
   #define __API_UNAVAILABLE_PLATFORM_visionos visionos,unavailable
   
   #define __API_DEPRECATED_PLATFORM_xros(x,y) visionos,introduced=x,deprecated=y
   
   
 


 #if 1
  
  #define __API_RANGE_STRINGIFY(x) __API_RANGE_STRINGIFY2(x)
  
 #endif 




 #if 1

    

    
    
    
    #define __API_AVAILABLE1(arg0,arg1) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg0))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg1)))
    
    #define __API_AVAILABLE3(arg0,arg1,arg2,arg3) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg0))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg1))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg2))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg3)))
    
    #define __API_AVAILABLE5(arg0,arg1,arg2,arg3,arg4,arg5) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg0))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg1))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg2))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg3))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg4))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg5)))
    
    #define __API_AVAILABLE7(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg0))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg1))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg2))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg3))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg4))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg5))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg6))) __attribute__((availability(__API_AVAILABLE_PLATFORM_##arg7)))
    
    #define __API_AVAILABLE_GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) NAME
    
    
    
    
    #define __API_AVAILABLE_BEGIN1(arg0,arg1) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_AVAILABLE_BEGIN3(arg0,arg1,arg2,arg3) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_AVAILABLE_BEGIN5(arg0,arg1,arg2,arg3,arg4,arg5) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_AVAILABLE_BEGIN7(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_AVAILABLE_BEGIN_GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) NAME

    

    
  
    
    #define __API_DEPRECATED_MSG1(msg,arg0,arg1) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg0,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg1,message=msg)))
    
    #define __API_DEPRECATED_MSG3(msg,arg0,arg1,arg2,arg3) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg0,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg1,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg2,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg3,message=msg)))
    
    #define __API_DEPRECATED_MSG5(msg,arg0,arg1,arg2,arg3,arg4,arg5) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg0,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg1,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg2,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg3,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg4,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg5,message=msg)))
    
    #define __API_DEPRECATED_MSG7(msg,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg0,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg1,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg2,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg3,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg4,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg5,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg6,message=msg))) __attribute__((availability(__API_DEPRECATED_PLATFORM_##arg7,message=msg)))
    
    #define __API_DEPRECATED_MSG_GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,NAME,...) NAME

    

    
    #define __API_DEPRECATED_BEGIN1(msg,arg0,arg1) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_DEPRECATED_BEGIN3(msg,arg0,arg1,arg2,arg3) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_DEPRECATED_BEGIN5(msg,arg0,arg1,arg2,arg3,arg4,arg5) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_DEPRECATED_BEGIN7(msg,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_DEPRECATED_BEGIN_GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,NAME,...) NAME

    
        #define __API_R(rep,x) __attribute__((availability(__API_DEPRECATED_PLATFORM_##x,replacement=rep)))
    

    
    #define __API_DEPRECATED_REP1(msg,arg0,arg1) __API_R(msg,arg0) __API_R(msg,arg1)
    
    #define __API_DEPRECATED_REP3(msg,arg0,arg1,arg2,arg3) __API_R(msg,arg0) __API_R(msg,arg1) __API_R(msg,arg2) __API_R(msg,arg3)
    
    #define __API_DEPRECATED_REP5(msg,arg0,arg1,arg2,arg3,arg4,arg5) __API_R(msg,arg0) __API_R(msg,arg1) __API_R(msg,arg2) __API_R(msg,arg3) __API_R(msg,arg4) __API_R(msg,arg5)
    
    #define __API_DEPRECATED_REP7(msg,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) __API_R(msg,arg0) __API_R(msg,arg1) __API_R(msg,arg2) __API_R(msg,arg3) __API_R(msg,arg4) __API_R(msg,arg5) __API_R(msg,arg6) __API_R(msg,arg7)
    
    #define __API_DEPRECATED_REP_GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,NAME,...) NAME

    
        #define __API_R_BEGIN(rep,x) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))    
    

    
    #define __API_DEPRECATED_BEGIN_REP1(msg,arg0,arg1) __API_R_BEGIN(msg,arg0) __API_R_BEGIN(msg,arg1)
    
    #define __API_DEPRECATED_BEGIN_REP3(msg,arg0,arg1,arg2,arg3) __API_R_BEGIN(msg,arg0) __API_R_BEGIN(msg,arg1) __API_R_BEGIN(msg,arg2) __API_R_BEGIN(msg,arg3)
    
    #define __API_DEPRECATED_BEGIN_REP5(msg,arg0,arg1,arg2,arg3,arg4,arg5) __API_R_BEGIN(msg,arg0) __API_R_BEGIN(msg,arg1) __API_R_BEGIN(msg,arg2) __API_R_BEGIN(msg,arg3) __API_R_BEGIN(msg,arg4) __API_R_BEGIN(msg,arg5)
    
    #define __API_DEPRECATED_BEGIN_REP7(msg,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) __API_R_BEGIN(msg,arg0) __API_R_BEGIN(msg,arg1) __API_R_BEGIN(msg,arg2) __API_R_BEGIN(msg,arg3) __API_R_BEGIN(msg,arg4) __API_R_BEGIN(msg,arg5) __API_R_BEGIN(msg,arg6) __API_R_BEGIN(msg,arg7)
    
    #define __API_DEPRECATED_BEGIN_REP_GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,NAME,...) NAME

    
       

    

    
    #define __API_UNAVAILABLE1(arg0,arg1) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg0))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg1)))
    
    #define __API_UNAVAILABLE3(arg0,arg1,arg2,arg3) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg0))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg1))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg2))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg3)))
    
    #define __API_UNAVAILABLE5(arg0,arg1,arg2,arg3,arg4,arg5) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg0))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg1))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg2))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg3))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg4))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg5)))
    
    #define __API_UNAVAILABLE7(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg0))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg1))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg2))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg3))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg4))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg5))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg6))) __attribute__((availability(__API_UNAVAILABLE_PLATFORM_##arg7)))
    
    #define __API_UNAVAILABLE_GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) NAME

    

    
    #define __API_UNAVAILABLE_BEGIN1(arg0,arg1) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_UNAVAILABLE_BEGIN3(arg0,arg1,arg2,arg3) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_UNAVAILABLE_BEGIN5(arg0,arg1,arg2,arg3,arg4,arg5) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_UNAVAILABLE_BEGIN7(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field)))) )), apply_to = any(record, enum, enum_constant, function, objc_method, objc_category, objc_protocol, objc_interface, objc_property, type_alias, variable, field))))
    
    #define __API_UNAVAILABLE_BEGIN_GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) NAME

 


   
 

    #define __swift_compiler_version_at_least(...) 1



   
 

  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)





    #define __OSX_AVAILABLE_STARTING(_osx, _ios) __AVAILABILITY_INTERNAL##_ios
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)                                                      __AVAILABILITY_INTERNAL##_iosIntro##_DEP##_iosDep##_MSG(_msg)







  #if 1
    
    #define __OS_AVAILABILITY_MSG(_target, _availability, _msg)  __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define __IOS_EXTENSION_UNAVAILABLE(_msg)  
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __IOS_PROHIBITED
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __TVOS_PROHIBITED
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __WATCHOS_PROHIBITED
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)








   






                                        



   



   





   



   



   



   



   






   



   



	#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))



	#define __deprecated_enum_msg(_msg) __deprecated_msg(_msg)





   










   



   




   



   



   



   



   



   






   



   






















   



   



   



   






   









   













   







   



































































































































































































































































































   











   



























   





   



   



                                          


   



   



   



   



   




   





   







   





















   











   































   


typedef __signed char           __int8_t;

typedef unsigned char           __uint8_t;
typedef short                   __int16_t;
typedef unsigned short          __uint16_t;
typedef int                     __int32_t;
typedef unsigned int            __uint32_t;
typedef long long               __int64_t;
typedef unsigned long long      __uint64_t;

typedef long                    __darwin_intptr_t;
typedef unsigned int            __darwin_natural_t;


   

typedef int                     __darwin_ct_rune_t;     


   
typedef union {
	char            __mbstate8[128];
	long long       _mbstateL;                      
} __mbstate_t;

typedef __mbstate_t             __darwin_mbstate_t;     


typedef long int        __darwin_ptrdiff_t;     



typedef long unsigned int           __darwin_size_t;        



typedef __builtin_va_list       __darwin_va_list;       



typedef int          __darwin_wchar_t;       


typedef __darwin_wchar_t        __darwin_rune_t;        


typedef int           __darwin_wint_t;        


typedef unsigned long           __darwin_clock_t;       
typedef __uint32_t              __darwin_socklen_t;     
typedef long                    __darwin_ssize_t;       
typedef long                    __darwin_time_t;        








   



typedef __int64_t       __darwin_blkcnt_t;      
typedef __int32_t       __darwin_blksize_t;     
typedef __int32_t       __darwin_dev_t;         
typedef unsigned int    __darwin_fsblkcnt_t;    
typedef unsigned int    __darwin_fsfilcnt_t;    
typedef __uint32_t      __darwin_gid_t;         
typedef __uint32_t      __darwin_id_t;          
typedef __uint64_t      __darwin_ino64_t;       

typedef __darwin_ino64_t __darwin_ino_t;        

typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t      __darwin_mode_t;        
typedef __int64_t       __darwin_off_t;         
typedef __int32_t       __darwin_pid_t;         
typedef __uint32_t      __darwin_sigset_t;      
typedef __int32_t       __darwin_suseconds_t;   
typedef __uint32_t      __darwin_uid_t;         
typedef __uint32_t      __darwin_useconds_t;    
typedef unsigned char   __darwin_uuid_t[16];
typedef char    __darwin_uuid_string_t[37];








// pthread opaque structures


struct __darwin_pthread_handler_rec {
	void (*__routine)(void *);	// Routine to call
	void *__arg;			// Argument to pass
	struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_cond_t {
	long __sig;
	char __opaque[40];
};

struct _opaque_pthread_condattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_mutex_t {
	long __sig;
	char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_once_t {
	long __sig;
	char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
	long __sig;
	char __opaque[16];
};

struct _opaque_pthread_t {
	long __sig;
	struct __darwin_pthread_handler_rec  *__cleanup_stack;
	char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;











typedef	int		__darwin_nl_item;
typedef	int		__darwin_wctrans_t;

typedef	__uint32_t	__darwin_wctype_t;













   






   


   
typedef enum {
	P_ALL,
	P_PID,
	P_PGID
} idtype_t;


   



typedef __darwin_pid_t        pid_t;



typedef __darwin_id_t   id_t;           



   




   



























 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)

















   








typedef int sig_atomic_t;



































   







   





   

   










typedef __signed char           int8_t;



typedef short                   int16_t;



typedef int                     int32_t;



typedef long long               int64_t;





typedef unsigned char           u_int8_t;



typedef unsigned short                  u_int16_t;



typedef unsigned int            u_int32_t;



typedef unsigned long long      u_int64_t;



typedef int64_t                 register_t;







   


typedef __darwin_intptr_t       intptr_t;





typedef unsigned long           uintptr_t;







typedef u_int64_t               user_addr_t;
typedef u_int64_t               user_size_t;
typedef int64_t                 user_ssize_t;
typedef int64_t                 user_long_t;
typedef u_int64_t               user_ulong_t;
typedef int64_t                 user_time_t;
typedef int64_t                 user_off_t;









typedef u_int64_t               syscall_arg_t;







struct __darwin_arm_exception_state
{
	__uint32_t __exception; 
	__uint32_t __fsr;       
	__uint32_t __far;       
};



struct __darwin_arm_exception_state64
{
	__uint64_t __far;       
	__uint32_t __esr;       
	__uint32_t __exception; 
};



struct __darwin_arm_thread_state
{
	__uint32_t __r[13]; 
	__uint32_t __sp;    
	__uint32_t __lr;    
	__uint32_t __pc;    
	__uint32_t __cpsr;  
};




   









struct __darwin_arm_thread_state64
{
	__uint64_t __x[29]; 
	__uint64_t __fp;    
	__uint64_t __lr;    
	__uint64_t __sp;    
	__uint64_t __pc;    
	__uint32_t __cpsr;  
	__uint32_t __pad;   
};






































struct __darwin_arm_vfp_state
{
	__uint32_t __r[64];
	__uint32_t __fpscr;
};





struct __darwin_arm_neon_state64
{
	__uint128_t __v[32];
	__uint32_t  __fpsr;
	__uint32_t  __fpcr;
};

struct __darwin_arm_neon_state
{
	__uint128_t __v[16];
	__uint32_t  __fpsr;
	__uint32_t  __fpcr;
};






struct __arm_pagein_state
{
	int __pagein_error;
};


   





struct __arm_legacy_debug_state
{
	__uint32_t __bvr[16];
	__uint32_t __bcr[16];
	__uint32_t __wvr[16];
	__uint32_t __wcr[16];
};



struct __darwin_arm_debug_state32
{
	__uint32_t __bvr[16];
	__uint32_t __bcr[16];
	__uint32_t __wvr[16];
	__uint32_t __wcr[16];
	__uint64_t __mdscr_el1; 
};


struct __darwin_arm_debug_state64
{
	__uint64_t __bvr[16];
	__uint64_t __bcr[16];
	__uint64_t __wvr[16];
	__uint64_t __wcr[16];
	__uint64_t __mdscr_el1; 
};



struct __darwin_arm_cpmu_state64
{
	__uint64_t __ctrs[16];
};









struct __darwin_mcontext32
{
	struct __darwin_arm_exception_state     __es;
	struct __darwin_arm_thread_state        __ss;
	struct __darwin_arm_vfp_state           __fs;
};





struct __darwin_mcontext64
{
	struct __darwin_arm_exception_state64   __es;
	struct __darwin_arm_thread_state64      __ss;
	struct __darwin_arm_neon_state64        __ns;
};




typedef struct __darwin_mcontext64      *mcontext_t;











typedef __darwin_pthread_attr_t pthread_attr_t;














struct __darwin_sigaltstack
{
	void            *ss_sp;         
	__darwin_size_t ss_size;        
	int             ss_flags;       
};
typedef struct __darwin_sigaltstack     stack_t; 











struct __darwin_ucontext
{
	int                     uc_onstack;
	__darwin_sigset_t       uc_sigmask;     
	struct __darwin_sigaltstack     uc_stack;       
	struct __darwin_ucontext        *uc_link;       
	__darwin_size_t         uc_mcsize;      
	struct __darwin_mcontext64        *uc_mcontext;   

};


typedef struct __darwin_ucontext        ucontext_t;     






typedef __darwin_sigset_t               sigset_t;



typedef __darwin_size_t        size_t;



typedef __darwin_uid_t        uid_t;


union sigval {
	
	int     sival_int;
	void    *sival_ptr;
};



struct sigevent {
	int                             sigev_notify;                           
	int                             sigev_signo;                            
	union sigval    sigev_value;                            
	void                    (*sigev_notify_function)(union sigval);   
	pthread_attr_t  *sigev_notify_attributes;       
};


typedef struct __siginfo {
	int     si_signo;               
	int     si_errno;               
	int     si_code;                
	pid_t   si_pid;                 
	uid_t   si_uid;                 
	int     si_status;              
	void    *si_addr;               
	union sigval si_value;          
	long    si_band;                
	unsigned long   __pad[7];       
} siginfo_t;



   

























union __sigaction_u {
	void    (*__sa_handler)(int);
	void    (*__sa_sigaction)(int, struct __siginfo *,
	    void *);
};


struct  __sigaction {
	union __sigaction_u __sigaction_u;  
	void    (*sa_tramp)(void *, int, int, siginfo_t *, void *);
	sigset_t sa_mask;               
	int     sa_flags;               
};


   
struct  sigaction {
	union __sigaction_u __sigaction_u;  
	sigset_t sa_mask;               
	int     sa_flags;               
};











   



   






typedef void (*sig_t)(int);     



   





struct  sigvec {
	void    (*sv_handler)(int);     
	int     sv_mask;                
	int     sv_flags;               
};






   
struct  sigstack {
	char    *ss_sp;                 
	int     ss_onstack;             
};











   

void(*signal(int, void (*)(int)))(int);





   









// AIX system headers need stdint.h to be re-enterable while _STD_TYPES_T
// is defined until an inclusion of it without _STD_TYPES_T occurs, in which
// case the header guard macro is defined.



   


// C99 7.18.3 Limits of other integer types
//
//  Footnote 219, 220: C++ implementations should define these macros only when
//  __STDC_LIMIT_MACROS is defined before <stdint.h> is included.
//
//  Footnote 222: C++ implementations should define these macros only when
//  __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.
//
// C++11 [cstdint.syn]p2:
//
//  The macros defined by <cstdint> are provided unconditionally. In particular,
//  the symbols __STDC_LIMIT_MACROS and __STDC_CONSTANT_MACROS (mentioned in
//  footnotes 219, 220, and 222 in the C standard) play no role in C++.
//
// C11 removed the problematic footnotes.
//
// Work around this inconsistency by always defining those macros in C++ mode,
// so that a C library implementation which follows the C99 standard can be
// used in C++.


















typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;



typedef int8_t           int_least8_t;
typedef int16_t         int_least16_t;
typedef int32_t         int_least32_t;
typedef int64_t         int_least64_t;
typedef uint8_t         uint_least8_t;
typedef uint16_t       uint_least16_t;
typedef uint32_t       uint_least32_t;
typedef uint64_t       uint_least64_t;



typedef int8_t            int_fast8_t;
typedef int16_t          int_fast16_t;
typedef int32_t          int_fast32_t;
typedef int64_t          int_fast64_t;
typedef uint8_t          uint_fast8_t;
typedef uint16_t        uint_fast16_t;
typedef uint32_t        uint_fast32_t;
typedef uint64_t        uint_fast64_t;












typedef long int intmax_t;




typedef long unsigned int uintmax_t;










   






   





































               















 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)







   






struct timeval
{
	__darwin_time_t         tv_sec;         
	__darwin_suseconds_t    tv_usec;        
};







   
typedef __uint64_t      rlim_t;



   


   






   



   



   







   


   



   
struct  rusage {
	struct timeval ru_utime;        
	struct timeval ru_stime;        

	
	
 long    ru_maxrss;              

	long    ru_ixrss;               
	long    ru_idrss;               
	long    ru_isrss;               
	long    ru_minflt;              
	long    ru_majflt;              
	long    ru_nswap;               
	long    ru_inblock;             
	long    ru_oublock;             
	long    ru_msgsnd;              
	long    ru_msgrcv;              
	long    ru_nsignals;            
	long    ru_nvcsw;               
	long    ru_nivcsw;              

};






   


typedef void *rusage_info_t;

struct rusage_info_v0 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
	uint64_t ri_cpu_time_qos_default;
	uint64_t ri_cpu_time_qos_maintenance;
	uint64_t ri_cpu_time_qos_background;
	uint64_t ri_cpu_time_qos_utility;
	uint64_t ri_cpu_time_qos_legacy;
	uint64_t ri_cpu_time_qos_user_initiated;
	uint64_t ri_cpu_time_qos_user_interactive;
	uint64_t ri_billed_system_time;
	uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
	uint64_t ri_cpu_time_qos_default;
	uint64_t ri_cpu_time_qos_maintenance;
	uint64_t ri_cpu_time_qos_background;
	uint64_t ri_cpu_time_qos_utility;
	uint64_t ri_cpu_time_qos_legacy;
	uint64_t ri_cpu_time_qos_user_initiated;
	uint64_t ri_cpu_time_qos_user_interactive;
	uint64_t ri_billed_system_time;
	uint64_t ri_serviced_system_time;
	uint64_t ri_logical_writes;
	uint64_t ri_lifetime_max_phys_footprint;
	uint64_t ri_instructions;
	uint64_t ri_cycles;
	uint64_t ri_billed_energy;
	uint64_t ri_serviced_energy;
	uint64_t ri_interval_max_phys_footprint;
	uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
	uint64_t ri_cpu_time_qos_default;
	uint64_t ri_cpu_time_qos_maintenance;
	uint64_t ri_cpu_time_qos_background;
	uint64_t ri_cpu_time_qos_utility;
	uint64_t ri_cpu_time_qos_legacy;
	uint64_t ri_cpu_time_qos_user_initiated;
	uint64_t ri_cpu_time_qos_user_interactive;
	uint64_t ri_billed_system_time;
	uint64_t ri_serviced_system_time;
	uint64_t ri_logical_writes;
	uint64_t ri_lifetime_max_phys_footprint;
	uint64_t ri_instructions;
	uint64_t ri_cycles;
	uint64_t ri_billed_energy;
	uint64_t ri_serviced_energy;
	uint64_t ri_interval_max_phys_footprint;
	uint64_t ri_runnable_time;
	uint64_t ri_flags;
};

struct rusage_info_v6 {
	uint8_t  ri_uuid[16];
	uint64_t ri_user_time;
	uint64_t ri_system_time;
	uint64_t ri_pkg_idle_wkups;
	uint64_t ri_interrupt_wkups;
	uint64_t ri_pageins;
	uint64_t ri_wired_size;
	uint64_t ri_resident_size;
	uint64_t ri_phys_footprint;
	uint64_t ri_proc_start_abstime;
	uint64_t ri_proc_exit_abstime;
	uint64_t ri_child_user_time;
	uint64_t ri_child_system_time;
	uint64_t ri_child_pkg_idle_wkups;
	uint64_t ri_child_interrupt_wkups;
	uint64_t ri_child_pageins;
	uint64_t ri_child_elapsed_abstime;
	uint64_t ri_diskio_bytesread;
	uint64_t ri_diskio_byteswritten;
	uint64_t ri_cpu_time_qos_default;
	uint64_t ri_cpu_time_qos_maintenance;
	uint64_t ri_cpu_time_qos_background;
	uint64_t ri_cpu_time_qos_utility;
	uint64_t ri_cpu_time_qos_legacy;
	uint64_t ri_cpu_time_qos_user_initiated;
	uint64_t ri_cpu_time_qos_user_interactive;
	uint64_t ri_billed_system_time;
	uint64_t ri_serviced_system_time;
	uint64_t ri_logical_writes;
	uint64_t ri_lifetime_max_phys_footprint;
	uint64_t ri_instructions;
	uint64_t ri_cycles;
	uint64_t ri_billed_energy;
	uint64_t ri_serviced_energy;
	uint64_t ri_interval_max_phys_footprint;
	uint64_t ri_runnable_time;
	uint64_t ri_flags;
	uint64_t ri_user_ptime;
	uint64_t ri_system_ptime;
	uint64_t ri_pinstructions;
	uint64_t ri_pcycles;
	uint64_t ri_energy_nj;
	uint64_t ri_penergy_nj;
	uint64_t ri_secure_time_in_system;
	uint64_t ri_secure_ptime_in_system;
	uint64_t ri_reserved[12];
};

typedef struct rusage_info_v6 rusage_info_current;






   


   



   



   
struct rlimit {
	rlim_t  rlim_cur;               
	rlim_t  rlim_max;               
};






   



   



   


struct proc_rlimit_control_wakeupmon {
	uint32_t wm_flags;
	int32_t wm_rate;
};








































int     getpriority(int, id_t);

int     getiopolicy_np(int, int) __OSX_AVAILABLE_STARTING(1050, 20000);

int     getrlimit(int, struct rlimit *) __asm("_" "x" );
int     getrusage(int, struct rusage *);
int     setpriority(int, id_t, int);

int     setiopolicy_np(int, int, int) __OSX_AVAILABLE_STARTING(1050, 20000);

int     setrlimit(int, __const struct rlimit *) __asm("_" "x" );





   



   






   







   











   





   





   

   










   



   














   

   






   



   









   


















































static __inline
uint16_t
_OSSwapInt16(
	uint16_t        _data
	)
{
	
	return (uint16_t)(_data << 8 | _data >> 8);
}

static __inline
uint32_t
_OSSwapInt32(
	uint32_t        _data
	)
{

	_data = __builtin_bswap32(_data);


	return _data;
}

static __inline
uint64_t
_OSSwapInt64(
	uint64_t        _data
	)
{

	return __builtin_bswap64(_data);

}



struct _OSUnalignedU16 {
	__volatile uint16_t __val;
} __attribute__((__packed__));

struct _OSUnalignedU32 {
	__volatile uint32_t __val;
} __attribute__((__packed__));

struct _OSUnalignedU64 {
	__volatile uint64_t __val;
} __attribute__((__packed__));


static __inline
uint16_t
OSReadSwapInt16(
	__const __volatile void   * _base,
	uintptr_t       _offset
	)
{
	return _OSSwapInt16(((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val);
}



static __inline
uint32_t
OSReadSwapInt32(
	__const __volatile void   * _base,
	uintptr_t       _offset
	)
{
	return _OSSwapInt32(((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val);
}



static __inline
uint64_t
OSReadSwapInt64(
	__const __volatile void   * _base,
	uintptr_t       _offset
	)
{
	return _OSSwapInt64(((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val);
}





static __inline
void
OSWriteSwapInt16(
	__volatile void   * _base,
	uintptr_t       _offset,
	uint16_t        _data
	)
{
	((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt16(_data);
}



static __inline
void
OSWriteSwapInt32(
	__volatile void   * _base,
	uintptr_t       _offset,
	uint32_t        _data
	)
{
	((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt32(_data);
}



static __inline
void
OSWriteSwapInt64(
	__volatile void    * _base,
	uintptr_t        _offset,
	uint64_t         _data
	)
{
	((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt64(_data);
}































   
union wait {
	int     w_status;               
	
    
	struct {

		unsigned int    w_Termsig:7,    
		    w_Coredump:1,               
		    w_Retcode:8,                
		    w_Filler:16;                

	} w_T;
	
    
	struct {

		unsigned int    w_Stopval:8,    
		    w_Stopsig:8,                
		    w_Filler:16;                

	} w_S;
};







pid_t   wait(int *) __asm("_" "x" );
pid_t   waitpid(pid_t, int *, int) __asm("_" "x" );

int     waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "x" );

pid_t   wait3(int *, int, struct rusage *);
pid_t   wait4(pid_t, int *, int, struct rusage *);

           









void	*alloca(size_t);		









                 






typedef __darwin_ct_rune_t ct_rune_t;



typedef __darwin_rune_t rune_t;








typedef __darwin_wchar_t wchar_t;


typedef struct {
	int quot;		
	int rem;		
} div_t;

typedef struct {
	long quot;		
	long rem;		
} ldiv_t;


typedef struct {
	long long quot;
	long long rem;
} lldiv_t;













extern int __mb_cur_max;










   



 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)






















   

typedef unsigned long long malloc_type_id_t;



// Included from <malloc/_malloc.h> so carefully manage what we include here.


 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)












__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_malloc(size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_calloc(size_t count, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void  malloc_type_free(void *  ptr, malloc_type_id_t type_id);
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_realloc(void *  ptr, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_valloc(size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_aligned_alloc(size_t alignment, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) int   malloc_type_posix_memalign(void *  *memptr, size_t alignment, size_t size, malloc_type_id_t type_id) ;




typedef struct _malloc_zone_t malloc_zone_t;

__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_zone_malloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_zone_calloc(malloc_zone_t *zone, size_t count, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2,3)));
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void  malloc_type_zone_free(malloc_zone_t *zone, void *  ptr, malloc_type_id_t type_id);
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_zone_realloc(malloc_zone_t *zone, void *  ptr, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_zone_valloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__API_UNAVAILABLE_GET_MACRO(macos, ios, tvos, watchos, visionos,__API_UNAVAILABLE8,__API_UNAVAILABLE7,__API_UNAVAILABLE6,__API_UNAVAILABLE5,__API_UNAVAILABLE4,__API_UNAVAILABLE3,__API_UNAVAILABLE2,__API_UNAVAILABLE1,__API_UNAVAILABLE0,0)(macos, ios, tvos, watchos, visionos) void *malloc_type_zone_memalign(malloc_zone_t *zone, size_t alignment, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));













                              



void *malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2))) ;
void  free(void * );
void *realloc(void *  __ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;
void *reallocf(void *  __ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void *valloc(size_t) __attribute__((alloc_size(1))) ;

void *aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_align(1))) __attribute__((alloc_size(2)))  __OSX_AVAILABLE(10.15) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));


int   posix_memalign(void *  *__memptr, size_t __alignment, size_t __size)   __OSX_AVAILABLE_STARTING(1060, 30000);






void	 abort(void) __attribute__((__cold__)) __attribute__((__noreturn__));
int	 abs(int) __attribute__((__const__));
int	 atexit(void (* _Nonnull)(void));
double	 atof(__const char *);
int	 atoi(__const char *);
long	 atol(__const char *);

long long
	 atoll(__const char *);

void	*bsearch(__const void *__key, __const void *__base, size_t __nel,
	    size_t __width, int (* _Nonnull __compar)(__const void *, __const void *));

div_t	 div(int, int) __attribute__((__const__));
void	 exit(int) __attribute__((__noreturn__));

char	*getenv(__const char *);
long	 labs(long) __attribute__((__const__));
ldiv_t	 ldiv(long, long) __attribute__((__const__));

long long
	 llabs(long long);
lldiv_t	 lldiv(long long, long long);


int	 mblen(__const char *__s, size_t __n);
size_t	 mbstowcs(wchar_t * restrict , __const char * restrict, size_t);
int	 mbtowc(wchar_t * restrict, __const char * restrict, size_t);

void	 qsort(void *__base, size_t __nel, size_t __width,
	    int (* _Nonnull __compar)(__const void *, __const void *));
int	 rand(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

void	 srand(unsigned) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double	 strtod(__const char *, char **) __asm("_" "x" );
float	 strtof(__const char *, char **) __asm("_" "x" );
long	 strtol(__const char *__str, char **__endptr, int __base);
long double
	 strtold(__const char *, char **);

long long 
	 strtoll(__const char *__str, char **__endptr, int __base);

unsigned long
	 strtoul(__const char *__str, char **__endptr, int __base);

unsigned long long
	 strtoull(__const char *__str, char **__endptr, int __base);


__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")))
__API_AVAILABLE_GET_MACRO(macos(10.0),__API_AVAILABLE8,__API_AVAILABLE7,__API_AVAILABLE6,__API_AVAILABLE5,__API_AVAILABLE4,__API_AVAILABLE3,__API_AVAILABLE2,__API_AVAILABLE1,__API_AVAILABLE0,0)(macos(10.0)) __attribute__((availability(ios,unavailable)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
int	 system(__const char *) __asm("_" "x" );


size_t	 wcstombs(char * restrict, __const wchar_t * restrict, size_t);
int	 wctomb(char *, wchar_t);


void	_Exit(int) __attribute__((__noreturn__));
long	 a64l(__const char *);
double	 drand48(void);
char	*ecvt(double, int, int *restrict, int *restrict); 
double	 erand48(unsigned short[3]);
char	*fcvt(double, int, int *restrict, int *restrict); 
char	*gcvt(double, int, char *); 
int	 getsubopt(char **, char * __const *, char **);
int	 grantpt(int);

char	*initstate(unsigned, char *, size_t); 

long	 jrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char	*l64a(long);
void	 lcong48(unsigned short[7]);
long	 lrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of mktemp(3), it is highly recommended that you use mkstemp(3) instead.")

char	*mktemp(char *);
int	 mkstemp(char *);
long	 mrand48(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long	 nrand48(unsigned short[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int	 posix_openpt(int);
char	*ptsname(int);


int ptsname_r(int fildes, char *buffer, size_t buflen) __API_AVAILABLE_GET_MACRO(macos(10.13.4), ios(11.3), tvos(11.3), watchos(4.3),__API_AVAILABLE8,__API_AVAILABLE7,__API_AVAILABLE6,__API_AVAILABLE5,__API_AVAILABLE4,__API_AVAILABLE3,__API_AVAILABLE2,__API_AVAILABLE1,__API_AVAILABLE0,0)(macos(10.13.4), ios(11.3), tvos(11.3), watchos(4.3));


int	 putenv(char *) __asm("_" "x" );
long	 random(void) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int	 rand_r(unsigned *) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));

char	*realpath(__const char * restrict, char * restrict) __asm("_" "x" "$DARWIN_EXTSN");

unsigned short
	*seed48(unsigned short[3]);
int	 setenv(__const char * __name, __const char * __value, int __overwrite) __asm("_" "x" );

void	 setkey(__const char *) __asm("_" "x" );

char	*setstate(__const char *);
void	 srand48(long);

void	 srandom(unsigned);

int	 unlockpt(int);

int	 unsetenv(__const char *) __asm("_" "x" );

           




typedef __darwin_dev_t        dev_t;    



typedef __darwin_mode_t         mode_t;




uint32_t arc4random(void);
void	 arc4random_addrandom(unsigned char * , int )
    __OSX_AVAILABLE(10.0)
    __IOS_DEPRECATED(2.0, 10.0, "use arc4random_stir")
    __TVOS_DEPRECATED(2.0, 10.0, "use arc4random_stir")
    __WATCHOS_DEPRECATED(1.0, 3.0, "use arc4random_stir");
void	 arc4random_buf(void * __buf, size_t __nbytes) __OSX_AVAILABLE_STARTING(1070, 40300);
void	 arc4random_stir(void);
uint32_t
	 arc4random_uniform(uint32_t __upper_bound) __OSX_AVAILABLE_STARTING(1070, 40300);

int	 atexit_b(void (^ _Nonnull)(void)) __OSX_AVAILABLE_STARTING(1060, 30200);


void	*bsearch_b(__const void *__key, __const void *__base, size_t __nel,
	    size_t __width, int (^ _Nonnull __compar)(__const void *, __const void *) __attribute__((__noescape__)))
	    __OSX_AVAILABLE_STARTING(1060, 30200);


	 
char	*cgetcap(char *, __const char *, int);
int	 cgetclose(void);
int	 cgetent(char **, char **, __const char *);
int	 cgetfirst(char **, char **);
int	 cgetmatch(__const char *, __const char *);
int	 cgetnext(char **, char **);
int	 cgetnum(char *, __const char *, long *);
int	 cgetset(__const char *);
int	 cgetstr(char *, __const char *, char **);
int	 cgetustr(char *, __const char *, char **);

int	 daemon(int, int) __asm("_" "x" ) __OSX_AVAILABLE_BUT_DEPRECATED_MSG(1000, 1050, 20000, 20000, "Use posix_spawn APIs instead.") __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char	*devname(dev_t, mode_t);
char	*devname_r(dev_t, mode_t, char *buf, int len);
char	*getbsize(int *, long *);
int	 getloadavg(double [], int);
__const char
	*getprogname(void);
void	 setprogname(__const char *);



int	 heapsort(void *__base, size_t __nel, size_t __width,
	    int (* _Nonnull __compar)(__const void *, __const void *));

int	 heapsort_b(void *__base, size_t __nel, size_t __width,
	    int (^ _Nonnull __compar)(__const void *, __const void *) __attribute__((__noescape__)))
	    __OSX_AVAILABLE_STARTING(1060, 30200);

int	 mergesort(void *__base, size_t __nel, size_t __width,
	    int (* _Nonnull __compar)(__const void *, __const void *));

int	 mergesort_b(void *__base, size_t __nel, size_t __width,
	    int (^ _Nonnull __compar)(__const void *, __const void *) __attribute__((__noescape__)))
	    __OSX_AVAILABLE_STARTING(1060, 30200);

void	 psort(void *__base, size_t __nel, size_t __width,
	    int (* _Nonnull __compar)(__const void *, __const void *))
	    __OSX_AVAILABLE_STARTING(1060, 30200);

void	 psort_b(void *__base, size_t __nel, size_t __width,
	    int (^ _Nonnull __compar)(__const void *, __const void *) __attribute__((__noescape__)))
	    __OSX_AVAILABLE_STARTING(1060, 30200);

void	 psort_r(void *__base, size_t __nel, size_t __width, void *,
	    int (* _Nonnull __compar)(void *, __const void *, __const void *))
	    __OSX_AVAILABLE_STARTING(1060, 30200);

void	 qsort_b(void *__base, size_t __nel, size_t __width,
	    int (^ _Nonnull __compar)(__const void *, __const void *) __attribute__((__noescape__)))
	    __OSX_AVAILABLE_STARTING(1060, 30200);

void	 qsort_r(void *__base, size_t __nel, size_t __width, void *,
	    int (* _Nonnull __compar)(void *, __const void *, __const void *));
int	 radixsort(__const unsigned char **__base, int __nel, __const unsigned char *__table,
	    unsigned __endbyte);
int	rpmatch(__const char *)
	__API_AVAILABLE_GET_MACRO(macos(10.15), ios(13.0), tvos(13.0), watchos(6.0),__API_AVAILABLE8,__API_AVAILABLE7,__API_AVAILABLE6,__API_AVAILABLE5,__API_AVAILABLE4,__API_AVAILABLE3,__API_AVAILABLE2,__API_AVAILABLE1,__API_AVAILABLE0,0)(macos(10.15), ios(13.0), tvos(13.0), watchos(6.0));
int	 sradixsort(__const unsigned char **__base, int __nel, __const unsigned char *__table,
	    unsigned __endbyte);
void	 sranddev(void);
void	 srandomdev(void);

long long
	strtonum(__const char *__numstr, long long __minval, long long __maxval, __const char **__errstrp)
	__API_AVAILABLE_GET_MACRO(macos(11.0), ios(14.0), tvos(14.0), watchos(7.0),__API_AVAILABLE8,__API_AVAILABLE7,__API_AVAILABLE6,__API_AVAILABLE5,__API_AVAILABLE4,__API_AVAILABLE3,__API_AVAILABLE2,__API_AVAILABLE1,__API_AVAILABLE0,0)(macos(11.0), ios(14.0), tvos(14.0), watchos(7.0));

long long
	 strtoq(__const char *__str, char **__endptr, int __base);
unsigned long long
	 strtouq(__const char *__str, char **__endptr, int __base);

extern char *suboptarg;		







           






   






   


   





 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)









                                           




typedef __darwin_va_list va_list;













 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)








int     renameat(int, __const char *, int, __const char *) __OSX_AVAILABLE_STARTING(101000, 80000);



int renamex_np(__const char *, __const char *, unsigned int) __OSX_AVAILABLE(10.12) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int, __const char *, int, __const char *, unsigned int) __OSX_AVAILABLE(10.12) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));









typedef __darwin_off_t		fpos_t;




   


struct __sbuf {
	unsigned char	*_base;
	int		_size;
};


struct __sFILEX;


   
typedef	struct __sFILE {
	unsigned char *_p;	
	int	_r;		
	int	_w;		
	short	_flags;		
	short	_file;		
	struct	__sbuf _bf;	
	int	_lbfsize;	

	
	void	*_cookie;	
	int	(* _Nullable _close)(void *);
	int	(* _Nullable _read) (void *, char *, int);
	fpos_t	(* _Nullable _seek) (void *, fpos_t, int);
	int	(* _Nullable _write)(void *, __const char *, int);

	
	struct	__sbuf _ub;	
	struct __sFILEX *_extra; 
	int	_ur;		

	
	unsigned char _ubuf[3];	
	unsigned char _nbuf[1];	

	
	struct	__sbuf _lb;	

	
	int	_blksize;	
	fpos_t	_offset;	
} FILE;




















extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;



	



   




				












void	 clearerr(FILE *);
int	 fclose(FILE *);
int	 feof(FILE *);
int	 ferror(FILE *);
int	 fflush(FILE *);
int	 fgetc(FILE *);
int	 fgetpos(FILE * restrict, fpos_t *);
char	*fgets(char * restrict, int, FILE *);

FILE	*fopen(__const char * restrict __filename, __const char * restrict __mode) __DARWIN_ALIAS_STARTING_MAC_##1060( __asm("_" "x" ));

int	 fprintf(FILE * restrict, __const char * restrict, ...) __attribute__((__format__ (__printf__, 2,  3)));
int	 fputc(int, FILE *);
int	 fputs(__const char * restrict, FILE * restrict) __asm("_" "x" );
size_t	 fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE	*freopen(__const char * restrict, __const char * restrict,
                 FILE * restrict) __asm("_" "x" );
int	 fscanf(FILE * restrict, __const char * restrict, ...) __attribute__((__format__ (__scanf__, 2,  3)));
int	 fseek(FILE *, long, int);
int	 fsetpos(FILE *, __const fpos_t *);
long	 ftell(FILE *);
size_t	 fwrite(__const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "x" );
int	 getc(FILE *);
int	 getchar(void);


__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")

char	*gets(char *);

void	 perror(__const char *) __attribute__((__cold__));
int	 printf(__const char * restrict, ...) __attribute__((__format__ (__printf__, 1,  2)));
int	 putc(int, FILE *);
int	 putchar(int);
int	 puts(__const char *);
int	 remove(__const char *);
int	 rename (__const char *__old, __const char *__new);
void	 rewind(FILE *);
int	 scanf(__const char * restrict, ...) __attribute__((__format__ (__scanf__, 1,  2)));
void	 setbuf(FILE * restrict, char * restrict);
int	 setvbuf(FILE * restrict, char * restrict, int, size_t);

__attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")))

__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use snprintf(3) instead.")

int	 sprintf(char * restrict, __const char * restrict, ...) __attribute__((__format__ (__printf__, 2,  3)));

int	 sscanf(__const char * restrict, __const char * restrict, ...) __attribute__((__format__ (__scanf__, 2,  3)));
FILE	*tmpfile(void);

__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")

char	*tmpnam(char *);

int	 ungetc(int, FILE *);
int	 vfprintf(FILE * restrict, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 2,  0)));
int	 vprintf(__const char * restrict, va_list) __attribute__((__format__ (__printf__, 1,  0)));

__attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")))

__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use vsnprintf(3) instead.")

int	 vsprintf(char * restrict, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 2,  0)));





   












char    *ctermid(char *);








FILE	*fdopen(int, __const char *) __DARWIN_ALIAS_STARTING_MAC_##1060( __asm("_" "x" ));

int	 fileno(FILE *);





   


             
int	 pclose(FILE *) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));

FILE	*popen(__const char *, __const char *) __DARWIN_ALIAS_STARTING_MAC_##1060( __asm("_" "x" )) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));

           



   





int	__srget(FILE *);
int	__svfscanf(FILE *, __const char *, va_list) __attribute__((__format__ (__scanf__, 2,  0)));
int	__swbuf(int, FILE *);



   







void	 flockfile(FILE *);
int	 ftrylockfile(FILE *);
void	 funlockfile(FILE *);
int	 getc_unlocked(FILE *);
int	 getchar_unlocked(void);
int	 putc_unlocked(int, FILE *);
int	 putchar_unlocked(int);



int	 getw(FILE *);
int	 putw(int, FILE *);


__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__deprecated_msg("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")

char	*tempnam(__const char *__dir, __const char *__prefix) __asm("_" "x" );









   




typedef __darwin_off_t          off_t;



int	 fseeko(FILE * __stream, off_t __offset, int __whence);
off_t	 ftello(FILE * __stream);




             
int	 snprintf(char * restrict __str, size_t __size, __const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3,  4)));
int	 vfscanf(FILE * restrict __stream, __const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2,  0)));
int	 vscanf(__const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1,  0)));
int	 vsnprintf(char * restrict __str, size_t __size, __const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3,  0)));
int	 vsscanf(__const char * restrict __str, __const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2,  0)));






   




typedef __darwin_ssize_t        ssize_t;



int	dprintf(int, __const char * restrict, ...) __attribute__((__format__ (__printf__, 2,  3))) __OSX_AVAILABLE_STARTING(1070, 40300);
int	vdprintf(int, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 2,  0))) __OSX_AVAILABLE_STARTING(1070, 40300);
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) __OSX_AVAILABLE_STARTING(1070, 40300);
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) __OSX_AVAILABLE_STARTING(1070, 40300);
FILE *fmemopen(void * restrict __buf, size_t __size, __const char * restrict __mode) __API_AVAILABLE_GET_MACRO(macos(10.13), ios(11.0), tvos(11.0), watchos(4.0),__API_AVAILABLE8,__API_AVAILABLE7,__API_AVAILABLE6,__API_AVAILABLE5,__API_AVAILABLE4,__API_AVAILABLE3,__API_AVAILABLE2,__API_AVAILABLE1,__API_AVAILABLE0,0)(macos(10.13), ios(11.0), tvos(11.0), watchos(4.0));
FILE *open_memstream(char **__bufp, size_t *__sizep) __API_AVAILABLE_GET_MACRO(macos(10.13), ios(11.0), tvos(11.0), watchos(4.0),__API_AVAILABLE8,__API_AVAILABLE7,__API_AVAILABLE6,__API_AVAILABLE5,__API_AVAILABLE4,__API_AVAILABLE3,__API_AVAILABLE2,__API_AVAILABLE1,__API_AVAILABLE0,0)(macos(10.13), ios(11.0), tvos(11.0), watchos(4.0));








             
extern __const int sys_nerr;		
extern __const char *__const sys_errlist[];

int	 asprintf(char ** restrict, __const char * restrict, ...) __attribute__((__format__ (__printf__, 2,  3)));
char	*ctermid_r(char *);
char	*fgetln(FILE *, size_t *);
__const char *fmtcheck(__const char *, __const char *) __attribute__((format_arg(2)));
int	 fpurge(FILE *);
void	 setbuffer(FILE *, char *, int);
int	 setlinebuf(FILE *);
int	 vasprintf(char ** restrict, __const char * restrict, va_list) __attribute__((__format__ (__printf__, 2,  0)));



   
FILE	*funopen(__const void *,
                 int (* _Nullable)(void *, char *, int),
                 int (* _Nullable)(void *, __const char *, int),
                 fpos_t (* _Nullable)(void *, fpos_t, int),
                 int (* _Nullable)(void *));




































extern int __sprintf_chk (char * restrict, int, size_t,
			  __const char * restrict, ...);




extern int __snprintf_chk (char * restrict, size_t, int, size_t,
			   __const char * restrict, ...);




extern int __vsprintf_chk (char * restrict, int, size_t,
			   __const char * restrict, va_list);




extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
			    __const char * restrict, va_list);













   





 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)









void	*memchr(__const void *__s, int __c, size_t __n);
int	 memcmp(__const void *__s1, __const void *__s2, size_t __n);
void	*memcpy(void *__dst, __const void *__src, size_t __n);
void	*memmove(void *__dst, __const void *__src, size_t __len);
void	*memset(void *__b, int __c, size_t __len);
char	*strcat(char *__s1, __const char *__s2);
char	*strchr(__const char *__s, int __c);
int	 strcmp(__const char *__s1, __const char *__s2);
int	 strcoll(__const char *__s1, __const char *__s2);
char	*strcpy(char *__dst, __const char *__src);
size_t	 strcspn(__const char *__s, __const char *__charset);
char	*strerror(int __errnum) __asm("_" "x" );
size_t	 strlen(__const char *__s);
char	*strncat(char *__s1, __const char *__s2, size_t __n);
int	 strncmp(__const char *__s1, __const char *__s2, size_t __n);
char	*strncpy(char *__dst, __const char *__src, size_t __n);
char	*strpbrk(__const char *__s, __const char *__charset);
char	*strrchr(__const char *__s, int __c);
size_t	 strspn(__const char *__s, __const char *__charset);
char	*strstr(__const char *__big, __const char *__little);
char	*strtok(char *__str, __const char *__sep);
size_t	 strxfrm(char *__s1, __const char *__s2, size_t __n);





   


             
char	*strtok_r(char *__str, __const char *__sep, char **__lasts);






   


             
int	 strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char	*strdup(__const char *__s1);
void	*memccpy(void *__dst, __const void *__src, int __c, size_t __n);






   


             
char	*stpcpy(char *__dst, __const char *__src);
char    *stpncpy(char *__dst, __const char *__src, size_t __n) __OSX_AVAILABLE_STARTING(1070, 40300);
char	*strndup(__const char *__s1, size_t __n) __OSX_AVAILABLE_STARTING(1070, 40300);
size_t   strnlen(__const char *__s1, size_t __n) __OSX_AVAILABLE_STARTING(1070, 40300);
char	*strsignal(int __sig);








typedef __darwin_size_t        rsize_t;



typedef int                    errno_t;



errno_t	memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) __OSX_AVAILABLE_STARTING(1090, 70000);








void	*memmem(__const void *__big, size_t __big_len, __const void *__little, size_t __little_len) __OSX_AVAILABLE_STARTING(1070, 40300);
void     memset_pattern4(void *__b, __const void *__pattern4, size_t __len) __OSX_AVAILABLE_STARTING(1050, 30000);
void     memset_pattern8(void *__b, __const void *__pattern8, size_t __len) __OSX_AVAILABLE_STARTING(1050, 30000);
void     memset_pattern16(void *__b, __const void *__pattern16, size_t __len) __OSX_AVAILABLE_STARTING(1050, 30000);

char	*strcasestr(__const char *__big, __const char *__little);
char	*strnstr(__const char *__big, __const char *__little, size_t __len);
size_t	 strlcat(char *__dst, __const char *__source, size_t __size);
size_t	 strlcpy(char *__dst, __const char *__source, size_t __size);
void	 strmode(int __mode, char *__bp);
char	*strsep(char **__stringp, __const char *__delim);


void	 swab(__const void * restrict, void * restrict, ssize_t);

__OSX_AVAILABLE(10.12.1) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
int	timingsafe_bcmp(__const void *__b1, __const void *__b2, size_t __len);

__OSX_AVAILABLE(11.0) __attribute__((availability(ios,introduced=14.0)))
__attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)))
int 	 strsignal_r(int __sig, char *__strsignalbuf, size_t __buflen);



   



   







 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)










int	 bcmp(__const void *, __const void *, size_t) ___POSIX_C_DEPRECATED_STARTING_##200112L;
void	 bcopy(__const void *, void *, size_t) ___POSIX_C_DEPRECATED_STARTING_##200112L;
void	 bzero(void *, size_t) ___POSIX_C_DEPRECATED_STARTING_##200112L;
char	*index(__const char *, int) ___POSIX_C_DEPRECATED_STARTING_##200112L;
char	*rindex(__const char *, int) ___POSIX_C_DEPRECATED_STARTING_##200112L;


int	 ffs(int);
int	 strcasecmp(__const char *, __const char *);
int	 strncasecmp(__const char *, __const char *, size_t);




             
int	 ffsl(long) __OSX_AVAILABLE_STARTING(1050, 20000);
int	 ffsll(long long) __OSX_AVAILABLE_STARTING(1090, 70000);
int	 fls(int) __OSX_AVAILABLE_STARTING(1050, 20000);
int	 flsl(long) __OSX_AVAILABLE_STARTING(1050, 20000);
int	 flsll(long long) __OSX_AVAILABLE_STARTING(1090, 70000);





   















 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)














































 

    #define __OSX_AVAILABLE_STARTING(_osx, _ios)
    
    #define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro, _osxDep, _iosIntro, _iosDep, _msg)




  #if 1
    
    #define   __attribute__((availability(_target,_availability,message=_msg)))
  
    #define __attribute__((availability(_target, _availability)))
    




  #if 1
    
    #define   
  
    #define 
    







  #if 1
    
    #define __OSX_AVAILABLE(_vers)               __attribute__((availability(macosx,introduced=_vers)))
    
  #endif





  #define __OSX_AVAILABLE(_vers)









  #if 1
    
    #ifndef __attribute__((availability(ios,unavailable)))
      
    #endif
    
    #define __IOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(ios,introduced=_start))) 
  








  #define __IOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(tvos,unavailable)))
      
    #endif
    
    #define __TVOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(tvos,introduced=_start))) 
  








  #define __TVOS_DEPRECATED(_start, _dep, _msg)





  #if 1
    
    #ifndef __attribute__((availability(watchos,unavailable)))
      
    #endif
    
    #define __WATCHOS_DEPRECATED(_start, _dep, _msg) __attribute__((availability(watchos,introduced=_start))) 
  








  #define __WATCHOS_DEPRECATED(_start, _dep, _msg)




  #if 1
    
    #define __SWIFT_UNAVAILABLE_MSG(_msg)         
  




  #define __SWIFT_UNAVAILABLE_MSG(_msg)



   


 #if 1

    
       
    

    
    #define __API_AVAILABLE_END 
#pragma  clang attribute pop
                                                              

    
       
    
    #define __API_DEPRECATED_WITH_REPLACEMENT(...) __API_DEPRECATED_REP_GET_MACRO(__VA_ARGS__,__API_DEPRECATED_REP8,__API_DEPRECATED_REP7,__API_DEPRECATED_REP6,__API_DEPRECATED_REP5,__API_DEPRECATED_REP4,__API_DEPRECATED_REP3,__API_DEPRECATED_REP2,__API_DEPRECATED_REP1,__API_DEPRECATED_REP0,0,0)(__VA_ARGS__)

    
    #define __API_DEPRECATED_END 
#pragma  clang attribute pop
                                                               

    
    #define __API_DEPRECATED_WITH_REPLACEMENT_END 
#pragma  clang attribute pop
                                                                                

    
       
    
  
    
    #define __API_UNAVAILABLE_END 
#pragma  clang attribute pop
                                                                
 


   






  #define __API_AVAILABLE_END(...)







  #define __API_DEPRECATED_END(...)



  #define __API_DEPRECATED_WITH_REPLACEMENT(...)





  #define __API_DEPRECATED_WITH_REPLACEMENT_END(...)







  #define __API_UNAVAILABLE_END(...)



   


  #define __SPI_AVAILABLE(...)



  #define __SPI_AVAILABLE_BEGIN(...)



  #define __SPI_AVAILABLE_END(...)



  #define __SPI_DEPRECATED(...)



  #define __SPI_DEPRECATED_WITH_REPLACEMENT(...)













                                                    

























































   






   




















typedef __darwin_wint_t wint_t;







   
typedef struct {
	__darwin_rune_t	__min;		
	__darwin_rune_t	__max;		
	__darwin_rune_t	__map;		
	__uint32_t	*__types;	
} _RuneEntry;

typedef struct {
	int		__nranges;	
	_RuneEntry	*__ranges;	
} _RuneRange;

typedef struct {
	char		__name[14];	
	__uint32_t	__mask;		
} _RuneCharClass;

typedef struct {
	char		__magic[8];	
	char		__encoding[32];	

	__darwin_rune_t	(*__sgetrune)(__const char *, __darwin_size_t, char __const **);
	int		(*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
	__darwin_rune_t	__invalid_rune;

	__uint32_t	__runetype[(1 <<8 )];
	__darwin_rune_t	__maplower[(1 <<8 )];
	__darwin_rune_t	__mapupper[(1 <<8 )];

	
    
	_RuneRange	__runetype_ext;
	_RuneRange	__maplower_ext;
	_RuneRange	__mapupper_ext;

	void		*__variable;	
	int		__variable_len;	

	
    
	int		__ncharclasses;
	_RuneCharClass	*__charclasses;
} _RuneLocale;




extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;













   




unsigned long		___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t	___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t	___toupper(__darwin_ct_rune_t);


__inline int
isascii(int _c)
{
	return ((_c & ~0x7F) == 0);
}


             
int             	__maskrune(__darwin_ct_rune_t, unsigned long);



__inline int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{

	return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
		: !!__maskrune(_c, _f));

}

__inline __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{

	return (_c < 0 || _c >= (1 <<8 )) ? 0 :
		!!(_DefaultRuneLocale.__runetype[_c] & _f);

}


             
__darwin_ct_rune_t	__toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t	__tolower(__darwin_ct_rune_t);



__inline int
__wcwidth(__darwin_ct_rune_t _c)
{
	unsigned int _x;

	if (_c == 0)
		return (0);
	_x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
	if ((_x & 0xe0000000L) != 0)
		return ((_x & 0xe0000000L) >> 30);
	return ((_x & 0x00040000L) != 0 ? 1 : -1);
}





__inline int
isalnum(int _c)
{
	return (__istype(_c, 0x00000100L|0x00000400L));
}

__inline int
isalpha(int _c)
{
	return (__istype(_c, 0x00000100L));
}

__inline int
isblank(int _c)
{
	return (__istype(_c, 0x00020000L));
}

__inline int
iscntrl(int _c)
{
	return (__istype(_c, 0x00000200L));
}


__inline int
isdigit(int _c)
{
	return (__isctype(_c, 0x00000400L));
}

__inline int
isgraph(int _c)
{
	return (__istype(_c, 0x00000800L));
}

__inline int
islower(int _c)
{
	return (__istype(_c, 0x00001000L));
}

__inline int
isprint(int _c)
{
	return (__istype(_c, 0x00040000L));
}

__inline int
ispunct(int _c)
{
	return (__istype(_c, 0x00002000L));
}

__inline int
isspace(int _c)
{
	return (__istype(_c, 0x00004000L));
}

__inline int
isupper(int _c)
{
	return (__istype(_c, 0x00008000L));
}


__inline int
isxdigit(int _c)
{
	return (__isctype(_c, 0x00010000L));
}

__inline int
toascii(int _c)
{
	return (_c & 0x7F);
}

__inline int
tolower(int _c)
{
        return (__tolower(_c));
}

__inline int
toupper(int _c)
{
        return (__toupper(_c));
}


__inline int
digittoint(int _c)
{
	return (__maskrune(_c, 0x0F));
}

__inline int
ishexnumber(int _c)
{
	return (__istype(_c, 0x00010000L));
}

__inline int
isideogram(int _c)
{
	return (__istype(_c, 0x00080000L));
}

__inline int
isnumber(int _c)
{
	return (__istype(_c, 0x00000400L));
}

__inline int
isphonogram(int _c)
{
	return (__istype(_c, 0x00200000L));
}

__inline int
isrune(int _c)
{
	return (__istype(_c, 0xFFFFFFF0L));
}

__inline int
isspecial(int _c)
{
	return (__istype(_c, 0x00100000L));
}












static int scanint(int c);
static int chrpos(char *s, int c);

struct token
{
    int token;
    int intvalue;
};

enum
{
    T_EOF,
    T_PLUS,
    T_MINUS,
    T_STAR,
    T_SLASH,
    T_INTLIT
};
// T_INTIT will store value of any integer

enum
{
    A_ADD,
    A_SUBTRACT,
    A_MULTIPLY,
    A_DIVIDE,
    A_INTLIT
};
struct ASTnode
{
    int op;
    struct ASTnode *left;
    struct ASTnode *right;
    int intvalue;
};




extern int Line;
extern int Putback;
extern FILE *Infile;
extern FILE *Outfile;
extern struct token Token;
int scan(struct token *t);
struct ASTnode *mkastnode(int op, struct ASTnode *left,
                          struct ASTnode *right, int intvalue);
struct ASTnode *mkastleaf(int op, int intvalue);
struct ASTnode *mkastunary(int op, struct ASTnode *left, int intvalue);
struct ASTnode *binexpr(int ptp);

int interpretAST(struct ASTnode *n);
void generatecode(struct ASTnode *n);

void freeall_registers(void);
void cgpreamble();
void cgpostamble();
int cgload(int value);
int cgadd(int r1, int r2);
int cgsub(int r1, int r2);
int cgmul(int r1, int r2);
int cgdiv(int r1, int r2);
void cgprintint(int r);

static int freereg[4];
static char *reglist[4] = {"r8", "r9", "r10", "r11"};

void freeall_registers(void){
    freereg[0]= freereg[1]= freereg[2]= freereg[3] = 1;
}

static int alloc_register(void){
    for(int i = 0 ; i<4; i++){
        if (freereg[i]){
            freereg[i]= 0;
            return i;
        }
    }
}

static void free_register(int reg){
    if (freereg[reg] != 0){
        fprintf(__stderrp, "Error trying to free register %d\n", reg);
        exit(1);
    }
    freereg[reg]= 1;
}

void cgpreamble(){
    freeall_registers();
    fputs(
    "\t.text\n"
    ".LC0:\n"
    "\t.string\t\"%d\\n\"\n"
    "printint:\n"
    "\tpush\t{r4, r5, r6, lr}\n"
    "\tmov	r5, r0\n"
    "\tldr	r0, .L3\n"
    "\tadd	r1, sp, #12\n"
    "\tmov	r2, r5\n"
    "\tbl	printf\n"
    "\tpop	{r4, r5, r6, pc}\n"
    "\t.align	2\n"
    ".L3:\n"
    "\t.word	%d\n"
    "\t.globl	main\n"
    "\t.type	main, %function\n"
    "main:\n"
    "\tpush	{r4, lr}\n"
    "\tadd	r4, sp, #0\n",
    Outfile);
}

void cgpostamble(){
    fputs(
    "\tmov	r0, #0\n"
    "\tpop	{r4, pc}\n",
    Outfile);
}

int cgload(int value)
{
    // Get a new register
    int r = alloc_register();

    // Print out the code to initialize the register
    fprintf(Outfile, "\tmov %s, #%d\n", reglist[r], value);
    return r;
}

int cgadd(int r1, int r2)
{
    fprintf(Outfile, "\tadd %s, %s, %s\n", reglist[r2], reglist[r2], reglist[r1]);
    free_register(r1);
    return r2;
}

int cgmul(int r1, int r2)
{
    fprintf(Outfile, "\tmul %s, %s, %s\n", reglist[r2], reglist[r2], reglist[r1]);
    free_register(r1);
    return r2;
}

int cgsub(int r1, int r2)
{
    fprintf(Outfile, "\tsub %s, %s, %s\n", reglist[r1], reglist[r1], reglist[r2]);
    free_register(r2);
    return r1;
}

int cgdiv(int r1, int r2)
{
    fprintf(Outfile, "\tmov %s, %s\n", reglist[0], reglist[r1]);
    fprintf(Outfile, "\tmov %s, %s\n", reglist[1], reglist[r2]);
    fprintf(Outfile, "\tbl __aeabi_idiv\n");
    fprintf(Outfile, "\tmov %s, %s\n", reglist[r1], reglist[0]);
    free_register(r2);
    return r1;
}

void cgprintint(int r)
{
    fprintf(Outfile, "\tmov %s, r0\n", reglist[r]);
    fprintf(Outfile, "\tbl printint\n");
    free_register(r);
}

