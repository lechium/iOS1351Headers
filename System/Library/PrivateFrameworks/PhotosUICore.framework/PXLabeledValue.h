/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXLabeledValueType;
@class NSString;

@interface PXLabeledValue : NSObject <NSCopying> {

	BOOL _separator;
	id<PXLabeledValueType> _value;
	NSString* _localizedLabel;

}

@property (nonatomic,readonly) id<PXLabeledValueType> value;                   //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel;                      //@synthesize localizedLabel=_localizedLabel - In the implementation block
@property (getter=isSeparator,nonatomic,readonly) BOOL separator;              //@synthesize separator=_separator - In the implementation block
+(id)separatorLabeledValue;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PXLabeledValueType>)value;
-(NSString *)localizedLabel;
-(BOOL)isEqualToLabeledValue:(id)arg1 ;
-(id)_initSeparator;
-(id)initWithValue:(id)arg1 localizedLabel:(id)arg2 ;
-(BOOL)isSeparator;
@end

