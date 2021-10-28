/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDDataDeletionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _generateDeletedObjects;
	BOOL _failIfNotFound;
	BOOL _notifyObservers;
	BOOL _secureDelete;
	/*^block*/id _recursiveDeleteAuthorizationBlock;
	NSString* _restrictedSourceBundleIdentifier;
	Class _entityClass;

}

@property (assign,nonatomic) BOOL generateDeletedObjects;                            //@synthesize generateDeletedObjects=_generateDeletedObjects - In the implementation block
@property (assign,nonatomic) BOOL failIfNotFound;                                    //@synthesize failIfNotFound=_failIfNotFound - In the implementation block
@property (assign,nonatomic) BOOL notifyObservers;                                   //@synthesize notifyObservers=_notifyObservers - In the implementation block
@property (assign,nonatomic) BOOL secureDelete;                                      //@synthesize secureDelete=_secureDelete - In the implementation block
@property (nonatomic,copy) id recursiveDeleteAuthorizationBlock;                     //@synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock - In the implementation block
@property (nonatomic,copy) NSString * restrictedSourceBundleIdentifier;              //@synthesize restrictedSourceBundleIdentifier=_restrictedSourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) Class entityClass;                                        //@synthesize entityClass=_entityClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)entityClass;
-(void)setEntityClass:(Class)arg1 ;
-(BOOL)notifyObservers;
-(void)setRecursiveDeleteAuthorizationBlock:(id)arg1 ;
-(void)setNotifyObservers:(BOOL)arg1 ;
-(id)recursiveDeleteAuthorizationBlock;
-(void)setGenerateDeletedObjects:(BOOL)arg1 ;
-(void)setFailIfNotFound:(BOOL)arg1 ;
-(BOOL)secureDelete;
-(BOOL)generateDeletedObjects;
-(BOOL)failIfNotFound;
-(NSString *)restrictedSourceBundleIdentifier;
-(void)setSecureDelete:(BOOL)arg1 ;
-(void)setRestrictedSourceBundleIdentifier:(NSString *)arg1 ;
@end
