/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/CKMediaObject.h>

@interface CKAVMediaObject : CKMediaObject {

	BOOL _durationLoaded;
	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
+(id)durationCache;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
@end
