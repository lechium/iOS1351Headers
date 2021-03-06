/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPActionOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPActionOperationLocator, NSArray;

@interface FPMoveInfo : FPActionOperationInfo <NSSecureCoding> {

	BOOL _shouldBounce;
	BOOL _byCopy;
	FPActionOperationLocator* _targetFolder;
	NSArray* _rootFilenames;
	unsigned long long _lastUsedDatePolicy;

}

@property (nonatomic,retain) FPActionOperationLocator * targetFolder;              //@synthesize targetFolder=_targetFolder - In the implementation block
@property (nonatomic,retain) NSArray * rootFilenames;                              //@synthesize rootFilenames=_rootFilenames - In the implementation block
@property (assign,nonatomic) unsigned long long lastUsedDatePolicy;                //@synthesize lastUsedDatePolicy=_lastUsedDatePolicy - In the implementation block
@property (assign,nonatomic) BOOL shouldBounce;                                    //@synthesize shouldBounce=_shouldBounce - In the implementation block
@property (assign,nonatomic) BOOL byCopy;                                          //@synthesize byCopy=_byCopy - In the implementation block
@property (nonatomic,readonly) BOOL byMoving; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)byCopy;
-(BOOL)shouldBounce;
-(unsigned long long)lastUsedDatePolicy;
-(void)setRootFilenames:(NSArray *)arg1 ;
-(void)setTargetFolder:(FPActionOperationLocator *)arg1 ;
-(void)setLastUsedDatePolicy:(unsigned long long)arg1 ;
-(void)setShouldBounce:(BOOL)arg1 ;
-(void)setByCopy:(BOOL)arg1 ;
-(FPActionOperationLocator *)targetFolder;
-(NSArray *)rootFilenames;
-(BOOL)byMoving;
-(id)initWithOperationID:(id)arg1 roots:(id)arg2 rootFilenames:(id)arg3 targetFolder:(id)arg4 lastUsedDatePolicy:(unsigned long long)arg5 bounce:(BOOL)arg6 byCopy:(BOOL)arg7 ;
@end

