/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DAECalendarAvailabilityContext : NSObject {

	/*^block*/id _resultsBlock;
	/*^block*/id _completionBlock;

}
-(void)finishedWithError:(id)arg1 ;
-(id)initWithResultsBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resultsReturned:(id)arg1 ;
@end
