/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface GKNATObserver : NSObject

@property (assign) NSObject*<GKNATObserverDelegate> delegate; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(NSObject*<GKNATObserverDelegate>)delegate;
-(void)setDelegate:(NSObject*<GKNATObserverDelegate>)arg1 ;
-(int)currentNATType;
-(void)shouldTryNATCheck;
@end

