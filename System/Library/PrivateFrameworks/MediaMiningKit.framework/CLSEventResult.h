/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLSEvent;

@interface CLSEventResult : NSObject {

	float _confidence;
	CLSEvent* _event;

}

@property (nonatomic,retain) CLSEvent * event;              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2 ;
-(id)description;
-(float)confidence;
-(CLSEvent *)event;
-(void)setEvent:(CLSEvent *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(BOOL)isSameEventAsResult:(id)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
@end
