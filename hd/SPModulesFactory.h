//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPModules.h"

@class NSString;

@interface SPModulesFactory : NSObject <SPModules>
{
}

+ (id)components;
- (id)targetValidationModuleWithView:(id)arg1 imageFetcher:(id)arg2;
- (id)cameraWithInitialState:(id)arg1;
- (id)fullscreenPlayer;
- (id)previewsScenariosWithQuery:(id)arg1 personsSource:(id)arg2 settings:(id)arg3 debugParams:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

