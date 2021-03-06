/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface ADIDRecord : NSObject {

	BOOL _dirty;
	NSString* _ID;
	NSData* _encryptedID;

}

@property (nonatomic,retain) NSData * encryptedID;              //@synthesize encryptedID=_encryptedID - In the implementation block
@property (nonatomic,retain) NSString * ID;                     //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) BOOL dirty;                        //@synthesize dirty=_dirty - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setDirty:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)dirty;
-(NSString *)ID;
-(id)initWithID:(id)arg1 ;
-(void)setID:(NSString *)arg1 ;
-(NSData *)encryptedID;
-(void)setEncryptedID:(NSData *)arg1 ;
@end

