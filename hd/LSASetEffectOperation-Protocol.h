//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSAEffectComponent;

@protocol LSASetEffectOperation <NSObject>
@property(readonly, nonatomic) id <NSObject> effectKey;
- (long long)performWithCoreManager:(shared_ptr_6e078de4)arg1 effectComponent:(LSAEffectComponent *)arg2 async:(_Bool)arg3;
@end
