/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NUAssertionInfo : NSObject {

	BOOL _isClassMethod;
	BOOL _isFatal;
	SEL _selector;
	Class _objectClass;
	NSString* _functionName;
	NSString* _fileName;
	unsigned long long _lineNumber;
	NSString* _message;

}

@property (assign) SEL selector;                               //@synthesize selector=_selector - In the implementation block
@property (retain) Class objectClass;                          //@synthesize objectClass=_objectClass - In the implementation block
@property (assign) BOOL isClassMethod;                         //@synthesize isClassMethod=_isClassMethod - In the implementation block
@property (retain) NSString * functionName;                    //@synthesize functionName=_functionName - In the implementation block
@property (retain) NSString * fileName;                        //@synthesize fileName=_fileName - In the implementation block
@property (assign) unsigned long long lineNumber;              //@synthesize lineNumber=_lineNumber - In the implementation block
@property (retain) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (assign) BOOL isFatal;                               //@synthesize isFatal=_isFatal - In the implementation block
-(id)description;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(unsigned long long)lineNumber;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(Class)objectClass;
-(void)setObjectClass:(Class)arg1 ;
-(NSString *)functionName;
-(NSString *)fileName;
-(void)setIsFatal:(BOOL)arg1 ;
-(void)setLineNumber:(unsigned long long)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(void)setIsClassMethod:(BOOL)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(id)prettyMethodName;
-(BOOL)isWarning;
-(BOOL)isClassMethod;
-(BOOL)isFatal;
@end

