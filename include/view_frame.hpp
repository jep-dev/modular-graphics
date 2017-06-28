#ifndef VIEW_FRAME_HPP
#define VIEW_FRAME_HPP

#include "SDL2/SDL.h"
#include "runnable.hpp"

namespace View {

	struct Frame : public Runnable {
		/** Polls and processes one event.
 		 * @return true unless the frame should close. */
		virtual bool poll(void);

		/** Polls until it returns false.
 		 * @return true unless the frame should close. */
		virtual bool run(void);

		/** Constructor; forwards the arguments to SDL_CreateWindow.
 		 * @param win The window managed by the Frame */
		Frame(SDL_Window *win = SDL_CreateWindow("", 0, 0, 640, 480, 0));

		/** Destructor; frees the child window. */
		virtual ~Frame(void);
	private:
		SDL_Window *win;
	};

}

#endif
