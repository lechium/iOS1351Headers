/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVAccountDelegatesRefreshDelegate;
@interface CalDAVAccountDelegatesRefreshOperation : CalDAVOperation {

	id<CalDAVAccountDelegatesRefreshDelegate> _mdelegate;

}

@property (assign,nonatomic) id<CalDAVAccountDelegatesRefreshDelegate> mdelegate;              //@synthesize mdelegate=_mdelegate - In the implementation block
-(void)setMdelegate:(id<CalDAVAccountDelegatesRefreshDelegate>)arg1 ;
-(void)refreshDelegates;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id<CalDAVAccountDelegatesRefreshDelegate>)mdelegate;
@end

