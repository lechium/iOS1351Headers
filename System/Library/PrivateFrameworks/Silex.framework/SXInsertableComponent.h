/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol SXInsertableComponent <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * layout; 
@property (nonatomic,retain) id<SXComponentAnchor> anchor; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)layout;
-(void)setLayout:(id)arg1;
-(id<SXComponentAnchor>)anchor;
-(void)setAnchor:(id)arg1;

@end
