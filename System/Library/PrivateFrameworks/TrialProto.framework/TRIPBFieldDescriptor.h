/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TrialProto/TrialProto-Structs.h>
@class TRIPBOneofDescriptor, NSString, TRIPBEnumDescriptor;

@interface TRIPBFieldDescriptor : NSObject {

	TRIPBMessageFieldDescription* description_;
	TRIPBOneofDescriptor* containingOneof_;
	SEL getSel_;
	SEL setSel_;
	SEL hasOrCountSel_;
	SEL setHasSel_;
	SCD_Union_TR5 defaultValue_;
	Class msgClass_;
	SCD_Union_TR6* enumHandling_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned number; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (nonatomic,readonly) BOOL hasDefaultValue; 
@property (nonatomic,readonly) /*function pointer*/void* defaultValue; 
@property (getter=isRequired,nonatomic,readonly) BOOL required; 
@property (getter=isOptional,nonatomic,readonly) BOOL optional; 
@property (nonatomic,readonly) unsigned char fieldType; 
@property (nonatomic,readonly) unsigned char mapKeyDataType; 
@property (getter=isPackable,nonatomic,readonly) BOOL packable; 
@property (nonatomic,readonly) TRIPBOneofDescriptor * containingOneof; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) TRIPBEnumDescriptor * enumDescriptor; 
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(unsigned char)dataType;
-(unsigned)number;
-(/*function pointer*/void*)defaultValue;
-(BOOL)isOptional;
-(BOOL)isRequired;
-(unsigned char)fieldType;
-(unsigned char)mapKeyDataType;
-(Class)msgClass;
-(BOOL)isValidEnumValue:(int)arg1 ;
-(id)initWithFieldDescription:(void*)arg1 includesDefault:(BOOL)arg2 syntax:(unsigned char)arg3 ;
-(BOOL)hasDefaultValue;
-(BOOL)isPackable;
-(TRIPBEnumDescriptor *)enumDescriptor;
-(id)textFormatName;
-(TRIPBOneofDescriptor *)containingOneof;
@end

