/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVAMattingResult.h>

@protocol CVADisparityPostprocessingResult;
@class NSString;

@interface CVAMattingResult_Impl : NSObject <CVAMattingResult> {

	id<CVADisparityPostprocessingResult> _disparityPostprocessingResult;
	CVBufferRef _alphaMattePixelBuffer;

}

@property (readonly) id<CVADisparityPostprocessingResult> disparityPostprocessingResult;              //@synthesize disparityPostprocessingResult=_disparityPostprocessingResult - In the implementation block
@property (readonly) CVBufferRef alphaMattePixelBuffer;                                               //@synthesize alphaMattePixelBuffer=_alphaMattePixelBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CVADisparityPostprocessingResult>)disparityPostprocessingResult;
-(CVBufferRef)alphaMattePixelBuffer;
-(id)initWithDisparityPostprocessingResult:(id)arg1 alphaMattePixelBuffer:(CVBufferRef)arg2 ;
@end

