//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCKeyboardObserverListenerAnnouncer;

@interface SCKeyboardObserver : NSObject
{
    SCKeyboardObserverListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_keyboardWillChange:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (id)init;

@end

