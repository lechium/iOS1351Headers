/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CHRecognitionSessionIndexableContent : NSObject {

	NSString* _indexableTextRepresentation;
	NSString* _presentableTextRepresentation;

}

@property (nonatomic,copy,readonly) NSString * indexableTextRepresentation;                //@synthesize indexableTextRepresentation=_indexableTextRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * presentableTextRepresentation;              //@synthesize presentableTextRepresentation=_presentableTextRepresentation - In the implementation block
-(void)dealloc;
-(NSString *)indexableTextRepresentation;
-(NSString *)presentableTextRepresentation;
-(id)initWithIndexableTextRepresentation:(id)arg1 presentableTextRepresentation:(id)arg2 ;
@end
