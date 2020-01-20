//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface SCUtilityLensViewModel : NSObject
{
    NSDictionary *_actionTexts;
    struct NSString *_context;
    unsigned long long _state;
    long long _devicePosition;
}

@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)isUtilitySupportedOnCurrentCamera;
- (id)actionTextForState:(unsigned long long)arg1;
- (id)initWithContext:(struct NSString *)arg1 actionTexts:(id)arg2;

@end
