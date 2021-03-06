/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXLayoutPolicyManager.h>

@protocol SXLayoutPolicyManager <NSObject>
@required
-(BOOL)shouldPerformLayoutWithLayoutOptionsDiff:(unsigned long long)arg1;

@end


@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;
@class NSString;

@interface SXLayoutPolicyManager : NSObject <SXLayoutPolicyManager> {

	id<SXDocumentProviding> _documentProvider;
	id<SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                                             //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;              //@synthesize hintsConfigurationOptionProvider=_hintsConfigurationOptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2 ;
-(BOOL)shouldPerformLayoutWithLayoutOptionsDiff:(unsigned long long)arg1 ;
-(id<SXHintsConfigurationOptionProvider>)hintsConfigurationOptionProvider;
@end

