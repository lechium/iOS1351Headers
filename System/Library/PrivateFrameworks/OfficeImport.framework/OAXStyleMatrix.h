/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXStyleMatrix : NSObject
+(void)readFromNode:(xmlNode*)arg1 toStyleMatrix:(id)arg2 packagePart:(id)arg3 drawingState:(id)arg4 ;
+(id)readReferenceFromNode:(xmlNode*)arg1 ;
+(BOOL)readReferenceFromParentNode:(xmlNode*)arg1 name:(const char*)arg2 inNamespace:(id)arg3 color:(id*)arg4 index:(unsigned*)arg5 ;
@end
