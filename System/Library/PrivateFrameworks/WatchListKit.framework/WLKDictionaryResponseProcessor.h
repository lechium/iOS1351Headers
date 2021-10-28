/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject {

	NSString* _dictionaryKeyPath;
	Class _objectClass;

}

@property (nonatomic,copy) NSString * dictionaryKeyPath;              //@synthesize dictionaryKeyPath=_dictionaryKeyPath - In the implementation block
@property (nonatomic,retain) Class objectClass;                       //@synthesize objectClass=_objectClass - In the implementation block
-(Class)objectClass;
-(void)setObjectClass:(Class)arg1 ;
-(id)processResponseData:(id)arg1 error:(id*)arg2 ;
-(id)processResponseData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSString *)dictionaryKeyPath;
-(void)setDictionaryKeyPath:(NSString *)arg1 ;
@end
