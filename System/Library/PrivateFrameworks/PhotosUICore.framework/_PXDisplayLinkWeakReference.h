/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PXDisplayLinkWeakReference : NSObject {

	id _object;
	SEL _selector;

}

@property (nonatomic,__weak,readonly) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(id)object;
-(void)handleDisplayLink:(id)arg1 ;
-(id)initWithObject:(id)arg1 selector:(SEL)arg2 ;
@end

