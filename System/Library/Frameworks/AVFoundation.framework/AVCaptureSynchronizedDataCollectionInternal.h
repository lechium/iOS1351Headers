/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutput, AVCaptureSynchronizedData, NSArray;

@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {

	AVCaptureOutput* dataOutputs[4];
	AVCaptureSynchronizedData* synchronizedData[4];
	char count;
	unsigned long long changeSeed;
	SCD_Struct_AV7 creationTime;
	NSArray* possibleDataOutputs;

}
@end
