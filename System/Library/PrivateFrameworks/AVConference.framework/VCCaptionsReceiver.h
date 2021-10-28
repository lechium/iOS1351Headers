/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VCCaptionsTranscription;

@interface VCCaptionsReceiver : NSObject {

	unsigned _captionsLastUtteranceNumber;
	unsigned _captionsLastUpdateNumber;
	id _delegate;
	VCCaptionsTranscription* _currentTranscription;

}

@property (readonly) id<VCCaptionsReceiverDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VCCaptionsTranscription * currentTranscription;              //@synthesize currentTranscription=_currentTranscription - In the implementation block
-(void)dealloc;
-(id<VCCaptionsReceiverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)processCaptionsData:(id)arg1 ;
-(void)setCurrentTranscription:(VCCaptionsTranscription *)arg1 ;
-(VCCaptionsTranscription *)currentTranscription;
@end
