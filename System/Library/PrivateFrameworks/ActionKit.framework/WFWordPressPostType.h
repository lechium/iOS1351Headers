/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDictionary;

@interface WFWordPressPostType : MTLModel <MTLJSONSerializing> {

	NSString* _name;
	NSString* _label;
	NSDictionary* _labels;

}

@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * labels;                       //@synthesize labels=_labels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
-(NSString *)name;
-(NSString *)label;
-(NSDictionary *)labels;
@end
