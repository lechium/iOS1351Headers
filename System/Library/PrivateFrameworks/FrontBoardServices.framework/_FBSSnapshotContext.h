/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSDisplayConfiguration, NSOrderedSet;

@interface _FBSSnapshotContext : NSObject <NSCopying> {

	FBSDisplayConfiguration* _displayConfiguration;
	NSOrderedSet* _layers;
	BOOL _opaque;
	double _scale;
	CGSize _snapshotSize;
	BOOL _allowsProtectedContent;

}

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * layers;                                       //@synthesize layers=_layers - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                                   //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) double scale;                                                  //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize snapshotSize;                                           //@synthesize snapshotSize=_snapshotSize - In the implementation block
@property (assign,nonatomic) BOOL allowsProtectedContent;                                   //@synthesize allowsProtectedContent=_allowsProtectedContent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(BOOL)isOpaque;
-(void)setScale:(double)arg1 ;
-(NSOrderedSet *)layers;
-(void)setOpaque:(BOOL)arg1 ;
-(FBSDisplayConfiguration *)displayConfiguration;
-(BOOL)allowsProtectedContent;
-(CGSize)snapshotSize;
-(id)initWithDisplayConfiguration:(id)arg1 layers:(id)arg2 ;
-(void)setSnapshotSize:(CGSize)arg1 ;
-(void)setAllowsProtectedContent:(BOOL)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 layer:(id)arg2 ;
@end
