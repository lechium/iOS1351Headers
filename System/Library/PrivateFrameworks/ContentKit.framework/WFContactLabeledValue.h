/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFContactLabeledValue : NSObject {

	NSString* _label;
	id _value;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) id value;                      //@synthesize value=_value - In the implementation block
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)localizedStringForLabel:(id)arg1 ;
-(id)description;
-(id)value;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
@end

