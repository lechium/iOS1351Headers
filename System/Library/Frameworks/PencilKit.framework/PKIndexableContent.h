/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CHRecognitionSessionIndexableContent, NSString;

@interface PKIndexableContent : NSObject {

	CHRecognitionSessionIndexableContent* _chIndexableContent;

}

@property (retain) CHRecognitionSessionIndexableContent * chIndexableContent;              //@synthesize chIndexableContent=_chIndexableContent - In the implementation block
@property (nonatomic,readonly) NSString * indexableTextRepresentation; 
@property (nonatomic,readonly) NSString * presentableTextRepresentation; 
-(id)initWithIndexableContent:(id)arg1 ;
-(NSString *)indexableTextRepresentation;
-(NSString *)presentableTextRepresentation;
-(CHRecognitionSessionIndexableContent *)chIndexableContent;
-(void)setChIndexableContent:(CHRecognitionSessionIndexableContent *)arg1 ;
@end

