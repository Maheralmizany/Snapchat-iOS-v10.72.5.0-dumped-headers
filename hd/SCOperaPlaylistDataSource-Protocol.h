//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaModelProvider.h"
#import "SCOperaModelToPagePropertiesConverter.h"
#import "SCOperaPlaylistItemGroupDataModelResolver.h"
#import "SCOperaPlaylistItemGroupResolver.h"
#import "SCOperaPlaylistItemMediaPreparationController.h"

@protocol SCOperaPlaylistDataSource <SCOperaModelProvider, SCOperaPlaylistItemGroupResolver, SCOperaModelToPagePropertiesConverter, SCOperaPlaylistItemMediaPreparationController, SCOperaPlaylistItemGroupDataModelResolver>
- (_Bool)needToPrepareMediaBeforeDisplay;
@end

