/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTImageEncoder.h>

@class NSString;

@interface AVTHEIFImageEncoder : NSObject <AVTImageEncoder> {

	BOOL _useHEICSSequence;

}

@property (nonatomic,readonly) BOOL useHEICSSequence;               //@synthesize useHEICSSequence=_useHEICSSequence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)HEICSSequenceEncoder;
+(id)defaultHEICEncoder;
-(id)fileExtension;
-(id)initUsingHeicsSequence:(BOOL)arg1 ;
-(id)imageFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)useHEICSSequence;
-(id)imageFromURL:(id)arg1 error:(id*)arg2 ;
-(id)dataFromImage:(id)arg1 ;
@end
