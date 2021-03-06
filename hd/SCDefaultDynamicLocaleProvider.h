//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDynamicLocaleProvider.h"

@class NSBundle, NSString, SCBehaviorSubject;

@interface SCDefaultDynamicLocaleProvider : NSObject <SCDynamicLocaleProvider>
{
    NSString *_locale;
    _Bool _recheckOnce;
    NSBundle *_localeBundle;
    id <SCLocaleBundleProvider> _bundleProvider;
    SCBehaviorSubject *_localizedStringEventObservable;
}

- (void).cxx_destruct;
- (id)_checkStringKeyInMainBundle:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringEvent;
- (id)initWithLocale:(id)arg1 bundleProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

