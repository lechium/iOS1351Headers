/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MetalTools/MetalTools-Structs.h>
@class NSString;

@interface MTLDebugBufferMarker : NSObject {

	NSString* _label;
	NSRange _range;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) NSRange range;               //@synthesize range=_range - In the implementation block
-(void)dealloc;
-(NSRange)range;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setRange:(NSRange)arg1 ;
@end
