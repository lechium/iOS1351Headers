/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface FATField : NSObject {

	BOOL _optional;
	unsigned _index;
	unsigned _type;
	NSString* _name;
	Class _structClass;
	FATField* _valueField;
	FATField* _keyField;

}

@property (assign) unsigned index;                               //@synthesize index=_index - In the implementation block
@property (assign) unsigned type;                                //@synthesize type=_type - In the implementation block
@property (assign) BOOL optional;                                //@synthesize optional=_optional - In the implementation block
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) Class structClass;                  //@synthesize structClass=_structClass - In the implementation block
@property (nonatomic,retain) FATField * valueField;              //@synthesize valueField=_valueField - In the implementation block
@property (nonatomic,retain) FATField * keyField;                //@synthesize keyField=_keyField - In the implementation block
+(id)fieldWithIndex:(unsigned)arg1 type:(unsigned)arg2 optional:(BOOL)arg3 name:(id)arg4 ;
+(id)fieldWithIndex:(unsigned)arg1 type:(unsigned)arg2 optional:(BOOL)arg3 name:(id)arg4 structClass:(Class)arg5 ;
+(id)fieldWithIndex:(unsigned)arg1 type:(unsigned)arg2 optional:(BOOL)arg3 name:(id)arg4 valueField:(id)arg5 ;
+(id)fieldWithIndex:(unsigned)arg1 type:(unsigned)arg2 optional:(BOOL)arg3 name:(id)arg4 keyField:(id)arg5 valueField:(id)arg6 ;
+(id)nameForFatFieldType:(unsigned)arg1 ;
-(id)description;
-(NSString *)name;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(BOOL)optional;
-(void)setKeyField:(FATField *)arg1 ;
-(void)setValueField:(FATField *)arg1 ;
-(void)setStructClass:(Class)arg1 ;
-(Class)structClass;
-(FATField *)valueField;
-(FATField *)keyField;
@end

