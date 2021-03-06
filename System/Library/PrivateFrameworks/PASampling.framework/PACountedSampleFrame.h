/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PASampling/PACountedFrame.h>

@class PASampleFrame;

@interface PACountedSampleFrame : PACountedFrame {

	PASampleFrame* _sampleFrame;

}

@property (readonly) PASampleFrame * sampleFrame;              //@synthesize sampleFrame=_sampleFrame - In the implementation block
-(id)debugDescription;
-(PASampleFrame *)sampleFrame;
-(id)initWithSampleFrame:(id)arg1 ;
@end

