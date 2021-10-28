/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, BWFormatRequirements;

@interface BWNodeInputMediaConfiguration : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWFormatRequirements* _formatRequirements;
	int _passthroughMode;
	int _retainedBufferCount;
	int _delayedBufferCount;
	int _indefinitelyHeldBufferCount;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements;              //@synthesize formatRequirements=_formatRequirements - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                    //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                                //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) int delayedBufferCount;                                 //@synthesize delayedBufferCount=_delayedBufferCount - In the implementation block
@property (assign,nonatomic) int indefinitelyHeldBufferCount;                        //@synthesize indefinitelyHeldBufferCount=_indefinitelyHeldBufferCount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)setPassthroughMode:(int)arg1 ;
-(int)retainedBufferCount;
-(void)_setAssociatedAttachedMediaKey:(id)arg1 ;
-(int)passthroughMode;
-(int)delayedBufferCount;
-(void)setDelayedBufferCount:(int)arg1 ;
-(int)indefinitelyHeldBufferCount;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
@end
