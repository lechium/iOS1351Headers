/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary;


@protocol SRPClientRequest <NSObject>
@property (nonatomic,copy,readonly) NSString * dsid; 
@property (nonatomic,copy,readonly) NSString * recordLabel; 
@property (nonatomic,copy,readonly) NSString * recoveryPassphrase; 
@property (nonatomic,retain,readonly) NSDictionary * escrowRecord; 
@property (nonatomic,copy,readonly) NSString * recordID; 
@required
-(NSString *)dsid;
-(NSString *)recordID;
-(id)validateInput;
-(NSString *)recordLabel;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;

@end

