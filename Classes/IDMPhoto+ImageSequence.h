//
//  IDMPhoto+ImageSequence.h
//  PhotoBrowserDemo
//
//  Created by Никита Бабонов on 13.02.2018.
//

#import "IDMPhoto.h"

@interface IDMPhoto (ImageSequence)

+ (IDMPhoto *)photoWithImageSequenceURLs:(NSDictionary *)urls;

@end
