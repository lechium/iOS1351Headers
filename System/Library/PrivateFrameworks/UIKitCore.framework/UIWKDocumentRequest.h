/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCopying;
#import <UIKitCore/UIKitCore-Structs.h>
@interface UIWKDocumentRequest : NSObject {

	id<NSCopying> _inputElementIdentifier;
	long long _flags;
	long long _surroundingGranularity;
	long long _granularityCount;
	CGRect _documentRect;

}

@property (assign,nonatomic) long long flags;                                   //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long surroundingGranularity;                  //@synthesize surroundingGranularity=_surroundingGranularity - In the implementation block
@property (assign,nonatomic) long long granularityCount;                        //@synthesize granularityCount=_granularityCount - In the implementation block
@property (assign,nonatomic) CGRect documentRect;                               //@synthesize documentRect=_documentRect - In the implementation block
@property (nonatomic,retain) id<NSCopying> inputElementIdentifier;              //@synthesize inputElementIdentifier=_inputElementIdentifier - In the implementation block
-(void)dealloc;
-(long long)flags;
-(void)setFlags:(long long)arg1 ;
-(id<NSCopying>)inputElementIdentifier;
-(void)setInputElementIdentifier:(id<NSCopying>)arg1 ;
-(long long)surroundingGranularity;
-(void)setSurroundingGranularity:(long long)arg1 ;
-(long long)granularityCount;
-(void)setGranularityCount:(long long)arg1 ;
-(CGRect)documentRect;
-(void)setDocumentRect:(CGRect)arg1 ;
@end

