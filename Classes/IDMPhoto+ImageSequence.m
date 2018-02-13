//
//  IDMPhoto+ImageSequence.m
//  PhotoBrowserDemo
//
//  Created by Никита Бабонов on 13.02.2018.
//

#import "IDMPhoto+ImageSequence.h"

@implementation IDMPhoto (ImageSequence)

+ (IDMPhoto *)photoWithImageSequenceURLs:(NSDictionary *)urls {
    return [[IDMPhoto alloc] initWithImageSequence:urls];
}

- (id)initWithImageSequence:(NSDictionary *)urls {
    if ((self = [super init])) {
        self.imageSequenceURLs = urls;
    }
    return self;
}

@end
