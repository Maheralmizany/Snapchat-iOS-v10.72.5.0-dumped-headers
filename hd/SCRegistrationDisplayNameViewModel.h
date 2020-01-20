//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface SCRegistrationDisplayNameViewModel : NSObject <NSCopying>
{
    _Bool _canContinue;
    _Bool _canExit;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_continueButtonTitle;
    NSURL *_selectedURL;
}

@property(readonly, copy, nonatomic) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;
@property(readonly, nonatomic) _Bool canExit; // @synthesize canExit=_canExit;
@property(readonly, nonatomic) _Bool canContinue; // @synthesize canContinue=_canContinue;
@property(readonly, copy, nonatomic) NSString *continueButtonTitle; // @synthesize continueButtonTitle=_continueButtonTitle;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 continueButtonTitle:(id)arg3 canContinue:(_Bool)arg4 canExit:(_Bool)arg5 selectedURL:(id)arg6;

@end

