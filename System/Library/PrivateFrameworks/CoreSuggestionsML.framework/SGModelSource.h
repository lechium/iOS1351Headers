/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PMLSessionDescriptor;

@interface SGModelSource : NSObject {

	PMLSessionDescriptor* _sessionDescriptor;
	Class _modelClass;

}

@property (nonatomic,retain) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,retain) Class modelClass;                                      //@synthesize modelClass=_modelClass - In the implementation block
-(Class)modelClass;
-(void)setModelClass:(Class)arg1 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2 ;
-(void)setSessionDescriptor:(PMLSessionDescriptor *)arg1 ;
@end

