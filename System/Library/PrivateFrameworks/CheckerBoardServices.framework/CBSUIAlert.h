/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface CBSUIAlert : NSObject <NSSecureCoding> {

	BOOL _isActive;
	NSString* _title;
	NSString* _message;
	long long _preferredStyle;
	NSMutableArray* _actions;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long preferredStyle;              //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL isActive;                         //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)alertWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)addAction:(id)arg1 ;
-(id)alertController;
-(NSMutableArray *)actions;
-(long long)preferredStyle;
-(void)activate;
-(void)deactivate;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setActions:(NSMutableArray *)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
-(void)_sendCreate;
-(void)_sendDismiss;
-(void)_receiveResponse;
@end
