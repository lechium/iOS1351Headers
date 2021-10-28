/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionFormatting.h>

@protocol NSObject;
@class NSMutableString, NSString;

@interface BSDescriptionBuilder : NSObject <BSDescriptionFormatting> {

	id<NSObject> _object;
	NSMutableString* _proem;
	NSMutableString* _description;
	int _activeComponent;
	NSString* _activePrefix;
	BOOL _useDebugDescription;

}

@property (assign,nonatomic) int activeComponent;                           //@synthesize activeComponent=_activeComponent - In the implementation block
@property (nonatomic,retain) NSString * activeMultilinePrefix;              //@synthesize activePrefix=_activePrefix - In the implementation block
@property (assign,nonatomic) BOOL useDebugDescription;                      //@synthesize useDebugDescription=_useDebugDescription - In the implementation block
+(id)builderWithObject:(id)arg1 ;
+(id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2 ;
+(id)descriptionForObject:(id)arg1 ;
+(id)componentSeparator;
+(id)nameObjectSeparator;
+(id)succinctDescriptionForObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)appendString:(id)arg1 ;
-(id)appendFormat:(id)arg1 ;
-(id)build;
-(void)appendString:(id)arg1 withName:(id)arg2 ;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 ;
-(NSString *)activeMultilinePrefix;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3 ;
-(void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 ;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3 ;
-(void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(id)appendInt:(int)arg1 withName:(id)arg2 ;
-(id)appendInteger:(long long)arg1 withName:(id)arg2 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(id)appendUnsignedInt:(unsigned)arg1 withName:(id)arg2 ;
-(id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(id)appendObjectsAndNames:(id)arg1 args:(char*)arg2 ;
-(id)appendObjectWithName:(id)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)modifyProem:(/*^block*/id)arg1 ;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ;
-(id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(BOOL)arg3 ;
-(id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3 ;
-(id)appendCString:(const char*)arg1 withName:(id)arg2 ;
-(void)tryAppendKey:(id)arg1 ;
-(void)setActiveMultilinePrefix:(NSString *)arg1 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(/*^block*/id)arg5 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(/*^block*/id)arg5 ;
-(void)appendProem:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)appendFlag:(long long)arg1 withName:(id)arg2 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3 ;
-(id)appendInt64:(long long)arg1 withName:(id)arg2 ;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3 ;
-(id)appendFloat:(double)arg1 withName:(id)arg2 ;
-(id)appendPointer:(void*)arg1 withName:(id)arg2 ;
-(id)appendPoint:(CGPoint)arg1 withName:(id)arg2 ;
-(id)appendSize:(CGSize)arg1 withName:(id)arg2 ;
-(id)appendRect:(CGRect)arg1 withName:(id)arg2 ;
-(id)appendSelector:(SEL)arg1 withName:(id)arg2 ;
-(id)appendQueue:(id)arg1 withName:(id)arg2 ;
-(id)appendClass:(Class)arg1 withName:(id)arg2 ;
-(void)appendCustomFormatWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)appendSuper;
-(id)appendObjectsAndNames:(id)arg1 ;
-(id)appendKey:(id)arg1 ;
-(id)appendKeys:(id)arg1 ;
-(id)modifyBody:(/*^block*/id)arg1 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 objectTransformer:(/*^block*/id)arg4 ;
-(int)activeComponent;
-(void)setActiveComponent:(int)arg1 ;
-(BOOL)useDebugDescription;
-(void)setUseDebugDescription:(BOOL)arg1 ;
@end
