/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/PUEditingExtensionHost.h>

@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost> {

	/*^block*/id _contentEditingOutputCommitHandler;

}

@property (copy) id contentEditingOutputCommitHandler;              //@synthesize contentEditingOutputCommitHandler=_contentEditingOutputCommitHandler - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setContentEditingOutputCommitHandler:(id)arg1 ;
-(id)contentEditingOutputCommitHandler;
@end
