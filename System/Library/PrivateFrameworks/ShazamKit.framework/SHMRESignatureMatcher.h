/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SHMatcher.h>

@protocol SHMatcherDelegate;
@class MRE, SHLocalConfiguration, NSString;

@interface SHMRESignatureMatcher : NSObject <SHMatcher> {

	id<SHMatcherDelegate> delegate;
	MRE* _mre;
	SHLocalConfiguration* _localConfiguration;

}

@property (nonatomic,retain) MRE * mre;                                              //@synthesize mre=_mre - In the implementation block
@property (nonatomic,retain) SHLocalConfiguration * localConfiguration;              //@synthesize localConfiguration=_localConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate; 
-(void)match:(id)arg1 ;
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id<SHMatcherDelegate>)arg1 ;
-(id)initWithLocalRecognitionConfiguration:(id)arg1 ;
-(void)buildMRE;
-(SHLocalConfiguration *)localConfiguration;
-(id)MRESignaturesFromMatches:(id)arg1 ;
-(MRE *)mre;
-(id)mediaItemsFromMREResult:(id)arg1 ;
-(void)setMre:(MRE *)arg1 ;
-(void)setLocalConfiguration:(SHLocalConfiguration *)arg1 ;
@end
