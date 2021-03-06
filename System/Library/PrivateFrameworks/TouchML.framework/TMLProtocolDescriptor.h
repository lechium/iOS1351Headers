/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TouchML/TouchML-Structs.h>
@class NSString, NSSet, NSMutableDictionary, Protocol, NSDictionary;

@interface TMLProtocolDescriptor : NSObject {

	NSString* _protocolName;
	NSSet* _implementsProtocols;
	NSMutableDictionary* _signals;
	Protocol* _objcProtocol;
	NSString* _objcProtocolName;

}

@property (nonatomic,readonly) NSString * protocolName;                  //@synthesize protocolName=_protocolName - In the implementation block
@property (nonatomic,readonly) NSDictionary * signals;                   //@synthesize signals=_signals - In the implementation block
@property (nonatomic,readonly) Protocol * objcProtocol;                  //@synthesize objcProtocol=_objcProtocol - In the implementation block
@property (nonatomic,copy) NSString * objcProtocolName;                  //@synthesize objcProtocolName=_objcProtocolName - In the implementation block
@property (nonatomic,readonly) NSSet * implementsProtocols;              //@synthesize implementsProtocols=_implementsProtocols - In the implementation block
+(id)decode:(const ProtobufCMessage*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encode:(ProtobufCMessage*)arg1 ;
-(NSString *)protocolName;
-(NSDictionary *)signals;
-(NSSet *)implementsProtocols;
-(id)initWithName:(id)arg1 implementsProtocols:(id)arg2 ;
-(void)setObjcProtocolName:(NSString *)arg1 ;
-(void)addSignal:(id)arg1 ;
-(Protocol *)objcProtocol;
-(NSString *)objcProtocolName;
@end

