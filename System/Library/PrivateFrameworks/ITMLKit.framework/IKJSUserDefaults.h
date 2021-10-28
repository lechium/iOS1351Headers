/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSUserDefaults.h>

@protocol IKJSUserDefaults <JSExport>
@required
-(void)removeData:(id)arg1;
-(id)getData:(id)arg1;
-(void)setData:(id)arg1 :(id)arg2;

@end


@protocol IKAppUserDefaultsStoring;
@interface IKJSUserDefaults : IKJSObject <IKJSUserDefaults> {

	id<IKAppUserDefaultsStoring> _userDefaultsStorage;

}

@property (assign,nonatomic,__weak) id<IKAppUserDefaultsStoring> userDefaultsStorage;              //@synthesize userDefaultsStorage=_userDefaultsStorage - In the implementation block
-(void)removeData:(id)arg1 ;
-(id<IKAppUserDefaultsStoring>)userDefaultsStorage;
-(id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2 ;
-(id)getData:(id)arg1 ;
-(void)setData:(id)arg1 :(id)arg2 ;
-(void)setUserDefaultsStorage:(id<IKAppUserDefaultsStoring>)arg1 ;
@end
