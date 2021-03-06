/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MDLNamed.h>

@class MDLMaterialProperty, NSString;

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed> {

	MDLMaterialProperty* _input;
	MDLMaterialProperty* _output;
	NSString* _name;

}

@property (nonatomic,__weak,readonly) MDLMaterialProperty * output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,__weak,readonly) MDLMaterialProperty * input;               //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(MDLMaterialProperty *)input;
-(MDLMaterialProperty *)output;
-(id)initWithOutput:(id)arg1 input:(id)arg2 ;
@end

